package com.SeeChen.NetworkSecurity.Controller;

import com.SeeChen.NetworkSecurity.Entity.User;
import com.SeeChen.NetworkSecurity.Enum.EnumResult;
import com.SeeChen.NetworkSecurity.Service.ServiceUser;
import com.SeeChen.NetworkSecurity.Util.UtilCookie;
import com.SeeChen.NetworkSecurity.Util.UtilResult;
import org.slf4j.helpers.Util;
import org.springframework.web.bind.annotation.*;

import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.util.HashMap;

@CrossOrigin
@RestController
@RequestMapping("/api")
public class ControllerUser {

    private final ServiceUser serviceUser;
    public ControllerUser (
            ServiceUser serviceUser
    ) {

        this.serviceUser = serviceUser;
    }

    @CrossOrigin
    @PostMapping("/register")
    public UtilResult<User> userRegister (
            HttpServletRequest request
    ) {

        String UEmail    = request.getParameter("e");
        String UPassword = request.getParameter("p");
        String UName     = request.getParameter("n");

        return serviceUser.Register(UEmail, UPassword, UName);
    }

    @CrossOrigin
    @PostMapping("/login")
    public UtilResult<User> userLogin (
            HttpServletRequest  request ,
            HttpServletResponse response
    ) {

        String UEmail    = request.getParameter("e");
        String UPassword = request.getParameter("p");

        UtilResult<User> result = serviceUser.Login(UEmail, UPassword);

        if (result.getCode() != EnumResult.SUCCESS.getCode()) {

            return result;
        }

        int expired = 365 * 24 * 60 * 60;

        response.addCookie(UtilCookie.setCookie.cookieAccount.cookieSecurity(
                "UID",
                result.getData().getUID(),
                expired
        ));
        response.addCookie(UtilCookie.setCookie.cookieAccount.cookieSecurity(
                "UEmail",
                result.getData().getUEmail(),
                expired
        ));
        response.addCookie(UtilCookie.setCookie.cookieAccount.cookieSecurity(
                "UPassword",
                result.getData().getUPassword(),
                expired
        ));

        return result;
    }

    @GetMapping("/info")
    public UtilResult<User> userInfo (
            HttpServletRequest request
    ) {

        UtilResult<User> result = new UtilResult<>();

        HashMap<String, String> hashMap = UtilCookie.getCookie.cookieAccount.cookieSecurity(request.getCookies());

        result = serviceUser.Login(hashMap.get("UEmail"), hashMap.get("UPassword"));

        return result;
    }
}

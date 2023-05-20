package com.SeeChen.NetworkSecurity.Controller;

import com.SeeChen.NetworkSecurity.Entity.Transfer;
import com.SeeChen.NetworkSecurity.Entity.User;
import com.SeeChen.NetworkSecurity.Enum.EnumResult;
import com.SeeChen.NetworkSecurity.Service.ServiceTransfer;
import com.SeeChen.NetworkSecurity.Service.ServiceUser;
import com.SeeChen.NetworkSecurity.Util.UtilCookie;
import com.SeeChen.NetworkSecurity.Util.UtilResult;
import org.springframework.data.repository.cdi.Eager;
import org.springframework.web.bind.annotation.*;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.util.HashMap;

@CrossOrigin
@RestController
@RequestMapping("/api")
public class ControllerTransfer {

    private final ServiceTransfer serviceTransfer;
    private final ServiceUser     serviceUser    ;
    public ControllerTransfer (
            ServiceTransfer serviceTransfer,
            ServiceUser     serviceUser
    ) {
        this.serviceTransfer = serviceTransfer  ;
        this.serviceUser     = serviceUser      ;
    }

    @PostMapping("/transfer")
    public UtilResult<String> Transfer (
            HttpServletRequest  request,
            HttpServletResponse response
    ) {

        UtilResult<String> result = new UtilResult<>();

        HashMap<String, String> hashMap = UtilCookie.getCookie.cookieAccount.cookieSecurity(request.getCookies());

        UtilResult<User> userUtilResult =  serviceUser.Login(hashMap.get("UEmail"), hashMap.get("UPassword"));

        if (userUtilResult.getCode() != EnumResult.SUCCESS.getCode()) {

            return result.init(EnumResult.ERROR);
        }

        String RID = request.getParameter("RID");
        String SID = userUtilResult.getData().getUID();
        Double Amount = Double.parseDouble(request.getParameter("Amount"));
        String Msg    = request.getParameter("Msg");

        result = serviceTransfer.Transfer(RID, SID, Amount, Msg);

        return result;
    }

    @GetMapping("/transferList")
    public UtilResult<Transfer> TransferList (
            HttpServletRequest request
    ) {

        String TID = request.getParameter("TID");

        return serviceTransfer.TransferList(TID);
    }

}

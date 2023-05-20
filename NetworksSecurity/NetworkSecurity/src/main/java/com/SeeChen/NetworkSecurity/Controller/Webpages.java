package com.SeeChen.NetworkSecurity.Controller;

import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;

@Controller
public class Webpages {

    @GetMapping("/")
    public String Index() {

        return "index";
    }

    @GetMapping("/register")
    public String PageRegister() {

        return "User/register";
    }

    @GetMapping("/login")
    public String PageLogin() {

        return "User/login";
    }

    @GetMapping("/account")
    public String PageAccount () {

        return "User/account";
    }

    @GetMapping("/transfer")
    public String PageTransfer () {

        return "Transfer/transfer";
    }
}

package com.SeeChen.NetworkSecurity.Service;

import com.SeeChen.NetworkSecurity.Entity.User;
import com.SeeChen.NetworkSecurity.Util.UtilResult;
import org.springframework.stereotype.Service;

@Service
public interface ServiceUser {

    UtilResult<User>   Register (String UEmail, String UPassword, String UName);
    UtilResult<User>   Login    (String UEmail, String UPassword);
    UtilResult<String> Delete   (String UID, String UEmail, String UPassword, String UName);
}
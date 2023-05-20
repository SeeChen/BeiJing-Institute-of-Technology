package com.SeeChen.NetworkSecurity.Service.Imp;

import com.SeeChen.NetworkSecurity.DAO.DaoUser;
import com.SeeChen.NetworkSecurity.Entity.User;
import com.SeeChen.NetworkSecurity.Enum.EnumResult;
import com.SeeChen.NetworkSecurity.Service.ServiceUser;
import com.SeeChen.NetworkSecurity.Util.UtilResult;
import org.springframework.data.mongodb.core.MongoTemplate;
import org.springframework.stereotype.Service;

@Service("ServiceUser")
public class ImpUser implements ServiceUser {

    private final MongoTemplate mongoTemplate;
    public ImpUser (
            MongoTemplate mongoTemplate
    ) {
        this.mongoTemplate = mongoTemplate;
    }

    @Override
    public UtilResult<User> Register (
            String UEmail   ,
            String UPassword,
            String UName
    ) {

        UtilResult<User> result = new UtilResult<>();

        DaoUser daoUser = new DaoUser(mongoTemplate);

        if (daoUser.findOneByEmail(UEmail) != null) {

             return result.init(EnumResult.ERROR);
        }

        User user = new User();
        user.init(UEmail, UPassword, UName);

        daoUser.save(user);

        return result.init(EnumResult.SUCCESS, user);
    }

    @Override
    public UtilResult<User> Login (
            String UEmail   ,
            String UPassword
    ) {

        UtilResult<User> result = new UtilResult<>();

        DaoUser daoUser = new DaoUser(mongoTemplate);

        User user = daoUser.findOneByEmail(UEmail);

        if (user == null) {

            return result.init(EnumResult.ERROR);
        }

        if (!user.getUPassword().equals(UPassword)) {

            return result.init(EnumResult.ERROR);
        }

        return result.init(EnumResult.SUCCESS, user);
    }

    @Override
    public UtilResult<String> Delete (
            String UID      ,
            String UEmail   ,
            String UPassword,
            String UName
    ) {

        UtilResult<String> result = new UtilResult<>();

        DaoUser daoUser = new DaoUser(mongoTemplate);
        User user = daoUser.findOneById(UID);

        if (user == null) {

            return result.init(EnumResult.ERROR);
        }

        if (!user.getUEmail().equals(UEmail) || !user.getUPassword().equals(UPassword) || !user.getUName().equals(UName)) {

            return result.init(EnumResult.ERROR);
        }

        daoUser.remove(UID);

        return result.init(EnumResult.SUCCESS);
    }
}

package com.SeeChen.NetworkSecurity.DAO;

import com.SeeChen.NetworkSecurity.Entity.User;
import org.springframework.data.mongodb.core.MongoTemplate;

import java.util.HashMap;

public class DaoUser extends DaoBase<User> {

    public DaoUser(MongoTemplate mongoTemplate) {
        super(mongoTemplate);
    }

    public void save (
            User data
    ) {

        super.Save(data);
    }

    public User findOneById (
            String UID
    ) {

        return super.FindOneByKey("UID", UID);
    }

    public User findOneByEmail (
            String UEmail
    ) {

        return super.FindOneByKey("UEmail", UEmail);
    }

    public void update (
            String UID  ,
            String Key  ,
            Object Value
    ) {

        HashMap<String, Object> hashMap = new HashMap<>();
        hashMap.put(Key, Value);

        super.UpdateByKey("UID", UID, hashMap);
    }

    public void remove (
            String UID
    ) {

        super.RemoveByKey("UID", UID);
    }
}

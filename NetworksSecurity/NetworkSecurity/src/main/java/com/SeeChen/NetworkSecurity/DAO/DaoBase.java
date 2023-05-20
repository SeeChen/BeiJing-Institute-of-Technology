package com.SeeChen.NetworkSecurity.DAO;

import com.SeeChen.NetworkSecurity.Util.UtilJudge;
import org.slf4j.helpers.Util;
import org.springframework.data.mongodb.core.MongoTemplate;
import org.springframework.data.mongodb.core.query.Criteria;
import org.springframework.data.mongodb.core.query.Query;
import org.springframework.data.mongodb.core.query.Update;
import org.springframework.stereotype.Repository;

import java.lang.reflect.Parameter;
import java.lang.reflect.ParameterizedType;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Objects;

@Repository
public abstract class DaoBase<T> {

    private final MongoTemplate mongoTemplate;
    private final Class<T> Clazz = (java.lang.Class) ((ParameterizedType) getClass().getGenericSuperclass()).getActualTypeArguments()[0];

    protected DaoBase (
            MongoTemplate mongoTemplate
    ) {

        this.mongoTemplate = mongoTemplate;
    }

    protected void Save (
            T Data
    ) {

        mongoTemplate.insert(Data);
    }

    protected T FindOneByKey (
            String Key  ,
            String Value
    ) {

        Query query = new Query(Criteria.where(Key).is(Value));
        return mongoTemplate.findOne(query, Clazz);
    }

    protected void UpdateByKey (
            String Key  ,
            String Value,
            HashMap<String, Object> Data
    ) {

        Update update = new Update();

        for (Map.Entry<String, Object> map : Data.entrySet()) {

            if (map.getValue() instanceof String) {

                update.set(map.getKey(),
                        UtilJudge.Numbers.isNumeric(map.getValue().toString()) ? Integer.valueOf(map.getValue().toString()) : map.getValue()
                );

                continue;
            }

            if (map.getValue() instanceof Double) {

                update.set(map.getKey(), map.getValue());
                continue;
            }

            if (map.getValue() instanceof List<?>) {

                update.set(map.getKey(), map.getValue());
                continue;
            }

            System.out.println(map.getValue().getClass());
            break;
        }

        Query query = new Query(Criteria.where(Key).is(Value));
        mongoTemplate.upsert(query, update, Clazz);
    }

    protected void RemoveByKey (
            String Key  ,
            String Value
    ) {

        Query query = new Query(Criteria.where(Key).is(Value));
        mongoTemplate.remove(query, Clazz);
    }
}

package com.SeeChen.NetworkSecurity.DAO;

import com.SeeChen.NetworkSecurity.Entity.Transfer;
import org.springframework.data.mongodb.core.MongoTemplate;

public class DaoTransfer extends DaoBase<Transfer>{

    public DaoTransfer(MongoTemplate mongoTemplate) {
        super(mongoTemplate);
    }

    public void save (
            Transfer transfer
    ) {

        super.Save(transfer);
    }

    public Transfer findOneById (
            String TID
    ) {

        return super.FindOneByKey("TID", TID);
    }
}

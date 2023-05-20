package com.SeeChen.NetworkSecurity.Service.Imp;

import com.SeeChen.NetworkSecurity.DAO.DaoTransfer;
import com.SeeChen.NetworkSecurity.DAO.DaoUser;
import com.SeeChen.NetworkSecurity.Entity.Transfer;
import com.SeeChen.NetworkSecurity.Entity.User;
import com.SeeChen.NetworkSecurity.Enum.EnumResult;
import com.SeeChen.NetworkSecurity.Service.ServiceTransfer;
import com.SeeChen.NetworkSecurity.Util.UtilResult;
import org.springframework.data.mongodb.core.MongoTemplate;
import org.springframework.stereotype.Service;
import org.springframework.web.bind.annotation.RestController;

@Service("ServiceTransfer")
public class ImpTransfer implements ServiceTransfer {

    private final MongoTemplate mongoTemplate;
    public ImpTransfer (
            MongoTemplate mongoTemplate
    ) {

        this.mongoTemplate = mongoTemplate;
    }

    @Override
    public UtilResult<String> Transfer (
            String RID      ,
            String SID      ,
            Double Amount   ,
            String Msg
    ) {

        UtilResult<String> result = new UtilResult<>();

        DaoUser     daoUser     = new DaoUser(mongoTemplate);
        DaoTransfer daoTransfer = new DaoTransfer(mongoTemplate);

        User userR = daoUser.findOneById(RID);
        User userS = daoUser.findOneById(SID);

        if (userR == null || userS == null) {

            return result.init(EnumResult.ERROR);
        }

        Transfer transfer = new Transfer(RID, SID, Amount, Msg);

        userR.getTransferRecord().add(transfer.getTID());
        userS.getTransferRecord().add(transfer.getTID());

        userS.setBalance(userS.getBalance() - Amount);
        userR.setBalance(userR.getBalance() + Amount);

        daoTransfer.save(transfer);

        daoUser.update(RID, "TransferRecord", userR.getTransferRecord());
        daoUser.update(RID, "Balance" , userR.getBalance());

        daoUser.update(SID, "TransferRecord", userS.getTransferRecord());
        daoUser.update(SID, "Balance", userS.getBalance());

        return result.init(EnumResult.SUCCESS);
    }

    @Override
    public UtilResult<Transfer> TransferList(
            String TID
    ) {

        DaoTransfer daoTransfer = new DaoTransfer(mongoTemplate);

        Transfer transfer = daoTransfer.findOneById(TID);

        UtilResult<Transfer> result = new UtilResult<>();

        if (transfer == null) {

            return result.init(EnumResult.ERROR);
        }

        return result.init(EnumResult.SUCCESS, transfer);
    }
}

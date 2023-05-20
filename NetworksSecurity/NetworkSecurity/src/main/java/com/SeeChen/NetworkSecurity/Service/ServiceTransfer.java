package com.SeeChen.NetworkSecurity.Service;

import com.SeeChen.NetworkSecurity.Entity.Transfer;
import com.SeeChen.NetworkSecurity.Util.UtilResult;
import org.springframework.stereotype.Service;

@Service
public interface ServiceTransfer {

    UtilResult<String> Transfer (String RID, String SID, Double Amount, String Msg);
    UtilResult<Transfer> TransferList (String TID);
}

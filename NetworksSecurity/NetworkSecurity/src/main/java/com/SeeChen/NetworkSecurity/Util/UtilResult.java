package com.SeeChen.NetworkSecurity.Util;

import com.SeeChen.NetworkSecurity.Enum.EnumResult;
import lombok.Data;

@Data
public class UtilResult<T> {

    private int     Code;
    private String  Msg ;
    private T       Data;

    public UtilResult () {}

    public UtilResult<T> init (
            EnumResult enumResult
    ) {

        return this.init(enumResult, null);
    }

    public UtilResult<T> init (
            EnumResult  enumResult,
            T           Data
    ) {

        this.Code = enumResult.getCode();
        this.Msg  = enumResult.getMsg() ;
        this.Data = Data;

        return this;
    }
}

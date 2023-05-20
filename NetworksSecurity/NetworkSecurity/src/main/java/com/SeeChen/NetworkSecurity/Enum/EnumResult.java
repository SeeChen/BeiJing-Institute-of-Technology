package com.SeeChen.NetworkSecurity.Enum;

public enum EnumResult {

    SUCCESS(
            200,
            "Success"
    ),

    ERROR (
            400,
            "Error Request"
    ),
    ;

    private int     Code;
    private String  Msg ;

    EnumResult (
            int    Code,
            String Msg
    ) {

        this.Code = Code;
        this.Msg  = Msg ;
    }

    public int getCode() {
        return this.Code;
    }

    public String getMsg () {

        return this.Msg;
    }
}

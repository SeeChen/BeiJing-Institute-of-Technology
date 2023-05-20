package com.SeeChen.NetworkSecurity.Entity;

import lombok.Data;
import org.bson.types.ObjectId;
import org.springframework.data.annotation.Id;
import org.springframework.data.mongodb.core.mapping.Document;

import java.io.Serializable;
import java.sql.Timestamp;
import java.text.SimpleDateFormat;

@Data
@Document("Transfer")
public class Transfer implements Serializable {

    @Id
    private String TID;

    private String Receiver ;
    private String Sender   ;

    private Double Amount;

    private String Date;

    private String Message;

    public Transfer () {}

    public Transfer (
            String Receiver ,
            String Sender   ,
            Double Amount   ,
            String Message
    ) {

        this.TID = "T" + new ObjectId();
        this.Receiver = Receiver;
        this.Sender = Sender;

        this.Amount = Amount;

        this.Date = new SimpleDateFormat("yyyy.MM.dd-HH:mm:ss").format(new Timestamp(System.currentTimeMillis()));

        this.Message = Message;
    }
}

package com.SeeChen.NetworkSecurity.Entity;

import lombok.Data;
import org.bson.types.ObjectId;
import org.springframework.data.annotation.Id;
import org.springframework.data.mongodb.core.mapping.Document;

import java.io.Serializable;
import java.sql.Timestamp;
import java.text.SimpleDateFormat;
import java.util.Collections;
import java.util.List;

@Data
@Document("User")
public class User implements Serializable {

    @Id
    private String UID  ;

    private String UEmail   ;
    private String UPassword;

    private String UName    ;
    private String UIntro   ;
    private String UPicture ;

    private String DateJoin ;
    private String DateBirth;

    private Double Balance  ;

    private List<String> Products;
    private List<String> TransferRecord;

    public User() {}

    public void init(
            String UEmail   ,
            String UPassword,
            String UName
    ) {

        this.UID = "U" + new ObjectId();

        this.UEmail     = UEmail;
        this.UPassword  = UPassword;

        this.UName      = UName       ;
        this.UIntro     = "None Intro";
        this.UPicture   = "default"   ;

        this.DateBirth  = "1990.01.01-00:00";
        this.DateJoin   = new SimpleDateFormat("yyyy.MM.dd-HH:mm:ss").format(new Timestamp(System.currentTimeMillis()));

        this.Balance = 0.00;

        this.Products = this.TransferRecord = Collections.emptyList();
    }
}
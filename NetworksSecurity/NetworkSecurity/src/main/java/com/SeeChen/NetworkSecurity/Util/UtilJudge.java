package com.SeeChen.NetworkSecurity.Util;

import java.util.regex.Pattern;

public class UtilJudge {

    public static class Numbers {

        public static boolean isNumeric (
                String str
        ) {

            Pattern pattern = Pattern.compile("^[-\\+]?[\\d]*$");
            return pattern.matcher(str).matches();
        }
    }
}

/*
题目内容：
母亲节是每年的五月第二个星期天，针对输入的年份，计算该年的哪一天是母亲节。
输入格式:
年份
输出格式：
日期（5月的哪一天）
输入样例：
2014
输出样例：
11
*/
#include <stdio.h>  
int main()  
{  
    int year,day,leapyear=0,i,whichday;  
    scanf("%d",&year);  
    for(i=1900;i<=year;i++)  
    {  
       if((i%400==0)||((i%100!=0)&&(i%4==0)))leapyear+=1;
    }  
    day=(((year-1899)*365+leapyear)-(31+30+31+31+30+31+30+31))%7;
    if(day==7)whichday=14;  
    else whichday=14-day;  
    printf("%d",whichday);
}

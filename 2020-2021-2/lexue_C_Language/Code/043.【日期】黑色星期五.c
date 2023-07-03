/*
在西方，星期五和数字13都代表着坏运气，两个不幸的个体最后结合成超级不幸的一天。所以，不管哪个月的十三日又恰逢星期五就叫"黑色星期五”。
输入：
    年份
输出：
    判断该年是否包含黑色星期五，如包含，给出具体日期
*/
#include <stdio.h>
int CaculateWeekDay(int y,int m, int d){  
    if(m==1||m==2){  
        m+=12;  
        y--;  
    }  
    int iWeek=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7;  
    switch(iWeek){  
    case 4:  
        return 1;  
        break;  
    default:  
        return 0;  
        break;  
    }  
}  
int main(){  
    int year,month,day=13,x,a[12]={'0'},i=0;  
    char c[7];  
    scanf("%d",&year);  
    for(month=1;month<=12;month++){  
        x=CaculateWeekDay(year,month,day);  
        if(x==1){  
            a[i]=month;  
            i++;  
        }  
    }  
    if(i==1){  
        printf("There is %d Black Friday in year %d.\n",i,year);  
        printf("It is:\n");  
    }else{  
        printf("There are %d Black Fridays in year %d.\n",i,year);  
        printf("They are:\n");  
    }  
    for(int j=0;j<i;j++){  
        printf("%d/%d/%d\n",year,a[j],day);  
    }  
}

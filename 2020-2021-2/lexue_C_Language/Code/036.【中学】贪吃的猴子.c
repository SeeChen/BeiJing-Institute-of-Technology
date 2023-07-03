/*
有一只猴子，第一天摘了若干个桃子 ，当即吃了一半，但还觉得不过瘾 ，就又多吃了一个。第2天早上又将剩下的桃子吃掉一半，还是觉得不过瘾，就又多吃了两个。以后每天早上都吃了前一天剩下的一半加天数个（例如，第5天吃了前一天剩下的一般加5个）。到第n天早上再想吃的时候，就只剩下一个桃子了。
输入：
    天数n
输出：
    第一天的桃子个数
提述：要先建立递推公式。
*/
#include <stdio.h>  
int eat(int m,int day);  
int main(){  
    int x;  
    scanf("%d",&x);  
    int total=eat(x+1,x);  
    if(x==1){  
        printf("The monkey got %d peach in first day.\n",total);  
    }else  
    printf("The monkey got %d peaches in first day.\n",total);  
}  
int eat(int m,int day){  
    if(day==1){  
        return 1;  
    }else{  
        return 2*(eat(m,day-1)+(m-day));  
    }  
}

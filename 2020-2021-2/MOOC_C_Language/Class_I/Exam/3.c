/*
题目内容：
十月一日是伟大祖国的生日，每年都会安排一个长假，一般情况下，有这样一个规律，即：它总是七天，并总是和一个周末相邻。例如：如果十月一日是周一到周五的某天，那么假期将从周一开始，直到与它后续的周末相连组成七天（前一个周末不放假）。如果十月一日是周六或者是周日中的某天，那么这个周末，从周六开始，和接下来的周一至周五组成七天（后续的周末不放假）。
注：
1、  这里的周末包括周六和周日两天；
2、  这里的算法与实际情况不一定相符。
题目要求：
给定一个年份（>1900），要求输出放假的起止日期。
输入格式:
2018[回车] 
输出格式：
10.01-10.07[回车]
输入样例：
2017
输出样例：
09.30-10.06
*/
#include "stdio.h"

int CaculateWeekDay(int y,int m, int d){
    if(m==1||m==2){
        m+=12;
        y--;
    }
    int iWeek=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7;
    switch(iWeek){
    case 0: return 1; break;
    case 1: return 2; break;
    case 2: return 3; break;
    case 3: return 4; break;
    case 4: return 5; break;
    case 5: return 6; break;
    case 6: return 7; break;
    }
}
int main(){
    int year=0,month=10,day=1,week;
    scanf("%d",&year);
    week=CaculateWeekDay(year,month,day);
	switch(week){
		case 1: printf("10.01-10.07\n"); break;
		case 2: printf("09.30-10.06\n"); break;
		case 3: printf("09.29-10.05\n"); break;
		case 4: printf("09.28-10.04\n"); break;
		case 5: printf("09.27-10.03\n"); break;
		case 6: printf("10.01-10.07\n"); break;
		case 7: printf("09.30-10.06\n"); break;
    }	
}

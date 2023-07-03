/*
我们再来计算天数（两个日期之间相差几天）。
本次编程与过去的程序不一样，我们已经给出了一些子函数，请你将这些函数拿下来，然后编写主函数来完成所需要的功能。
输入：
    起始日期的年，月，日
    终止日期的年，月，日   （假设终止日期大于起始日期）
输出：
   终止日期与起始日期之间的天数
注意：不用提交完整程序，只需要提交你自己编写的主函数即可。
*/
#include <stdio.h>  
int leap_year( int );     
int year_days( int );     
int days(int,int,int);    
int leap_year( int year ){      // 判断闰年或平年  
  return ( (year%4==0 && year%100!=0) || year%400==0 ) ? 1 : 0;  
}  
int year_days(int year){        // 计算一整年的天数  
  return leap_year( year ) ? 366 : 365;  
}  
int days( int year, int month, int day ){    // 计算该天month,day 是本年year的第几天  
  int months[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31}, i;  
  if  ( leap_year( year ) && month >2 )  
    day++;
  for ( i=1; i<month; i++ )  
    day += months[i];  
  return day;  
}  
int main(){
	int syear,smonth,sday,eyear,emonth,eday;
	int bdays;
	int i;
	scanf("%d %d %d",&syear,&smonth,&sday);
	scanf("%d %d %d",&eyear,&emonth,&eday);
	if((eyear-syear)==0)
		bdays=days(eyear,emonth,eday)-days(syear,smonth,sday);
	else if((eyear-syear)==1)
		bdays=(year_days(syear)-days(syear,smonth,sday))+days(eyear,emonth,eday);
	else if((eyear-syear)>1)
		bdays=(year_days(syear)-days(syear,smonth,sday))+days(eyear,emonth,eday);
	for(i=1;i<(eyear-syear);i++)
		bdays=bdays+year_days(syear+i);
	printf("%d days\n",bdays);
	return 0;
}

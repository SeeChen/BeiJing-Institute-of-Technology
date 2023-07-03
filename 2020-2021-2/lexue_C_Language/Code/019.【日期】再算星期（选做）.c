/*
再次给出任意一个年月日（年>1900），现在我们不能只是直接计算，要先判断给出的日期是否合法，对于非法的日期要给出错误提示信息，合法的日期要再计算是星期几。
输入：
    年 月 日
输出：
    0～6
    星期日用 0 表示，星期一用 1 表示，星期二用 2 表示......星期六用 6 表示。
*/
#include <stdio.h>
int main(){
    int year,month,day,week;
    scanf("%d %d %d",&year,&month,&day);
	if(month<1||month>12)
		printf("month is error.\n");
	else if(day<1||((month==1||month==3||month==5||month==7||month==8||month==10||month==12)&&day>31)||((month==4||month==6||month==9||month==11)&&day>30))
		printf("day is error.\n");
	else if((month==2&&((year%4==0&&year%100!=0||year%400==0)==1)&&day>29)||(month==2&&day>28&&((year%4==0&&year%100!=0||year%400==0)==0)))
		printf("day is error.\n");
	else{
		if(month==1||month==2){
			month+=12;
			year--;
		}
		week=(day+2*month+3*(month+1)/5+year+year/4-year/100+year/400)%7;
		week+=1;
		if(week==7)
			week=0;
		printf("%d\n",week);
	}
}

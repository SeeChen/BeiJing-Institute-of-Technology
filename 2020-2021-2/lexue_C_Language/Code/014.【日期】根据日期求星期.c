/*
任意给出一个年月日，求出是星期几。
输入：
    年 月 日
输出：
    0～6
    星期日用 0 表示，星期一用 1 表示，星期二用 2 表示......星期六用 6 表示。
假设年份大于1900。先想一想：我们现在只会使用 if 语句，该如何建立数学模型？找到数学模型是解决本题的关键。
*/
#include <stdio.h>
int main(){
    int year,month,day,week;
    scanf("%d %d %d",&year,&month,&day);
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

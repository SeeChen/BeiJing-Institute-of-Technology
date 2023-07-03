/*
2012年4月1日，北京是人民政府根据《中华人民共和国道路交通安全法》和《北京市实施〈中华人民共和国大气污染防 治法〉办法》有关规定，自2012年4月11日起，继续对机动车实施按车牌尾号工作日高峰时段 区域限行交通管理措施。
　　根据规定，按车牌尾号限行的机动车车牌尾号分为五组，每13周轮换一次限行日，分别为：
　　(1) 自2012年4月9日至2012年7月7日，星期一至星期五限行机动车车牌尾号分别为：3和8、4和9、5和0、1和6、2和7(含临时号牌，机动车车牌尾号为英文字母的按0号管理，下同)；
　　(2) 自2012年7月8日至2012年10月6日，星期一至星期五限行机动车车牌尾号分别为：2和7、3和8、4和9、5和0、1和6；
　　(3) 自2012年10月7日至2013年1月5日，星期一至星期五限行机动车车牌尾号分别为：1和6、2和7、3和8、4和9、5和0；
　　(4) 自2013年1月6日至2013年4月10日，星期一至星期五限行机动车车牌尾号分别为：5和0、1和6、2和7、3和8、4和9。
现给出 2012 年 4 月 9 日之后的任意日期，如果不考虑国家统一的公假，只考虑日期一个因素，请计算指定日期要限行的车牌尾号。
*/
#include<stdio.h>
int leap_year(int);
int year_days(int);
int days(int,int,int);
int leap_year(int year){
	return ((year%4==0&&year%100!=0)||year%400==0)?1:0;
}
int year_days(int year){
		return leap_year(year)?366:365;
	}
int days(int year,int month,int day){
		int months[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},i;
		if(leap_year(year)&&month>2) day++;
	for (i=1;i<month;i++)
		day+=months[i];
	return day;
}
int main(){
	int a,b,c,i,d=0,m;
	int limit0[]={3,4,5,1,2,8,9,0,6,7};
	int limit1[]={2,3,4,5,1,7,8,9,0,6};
	int limit2[]={1,2,3,4,5,6,7,8,9,0};
	int limit3[]={5,1,2,3,4,0,6,7,8,9};
	int limit4[]={4,5,1,2,3,9,0,6,7,8};
	scanf("%d%d%d",&a,&b,&c);
	for (i=2012;i<a;i++)
		d+=year_days(i);
	d+=days(a,b,c)-days(2012,4,9);
	m=(d/91)%5;
	int week=(d%91)%7;
	if(week==5||week==6)
		printf("Free.\n");
	else{
		switch(m){
			case 0:
				printf("%d and %d.\n",limit0[week],limit0[week+5]);
				break;
			case 1:
				printf("%d and %d.\n",limit1[week],limit1[week+5]);
				break;
			case 2:
				printf("%d and %d.\n",limit2[week],limit2[week+5]);
				break;
			case 3:
				printf("%d and %d.\n",limit3[week],limit3[week+5]);
				break;
			case 4:
				printf("%d and %d.\n",limit4[week],limit4[week+5]);
				break;
		}
	}
}

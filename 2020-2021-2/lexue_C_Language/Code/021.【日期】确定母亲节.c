/*
母亲节是每年的五月第二个星期天，针对输入的年份，计算该年的哪一天是母亲节。
输入： 
    年份
输出：
    日期（5月的哪一天）
*/
#include <stdio.h>  
main(){
	int a,b=5,c=1,d,e,f=0,g;
	scanf("%d",&a);
	while(f<2){
		e=c+120;
		if(a%100==0){
			if(a%400==0) e=e+1;
		}else if(a%4==0){
			e=e+1;
		}
		d=(a-1)*365+(a-1)/4-(a-1)/100+(a-1)/400+e;
		g=d%7;
		if(g==0){
			f=f+1;c=c+1;
		}else{
			c=c+1;
		}
	}
	printf("%d\n",c-1);  
	return 0;
}

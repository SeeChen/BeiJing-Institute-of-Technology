/*
我们经常要计算，从今天往后N天之后是哪一天（哪年哪月哪日）。现在我们就可以编写一个程序，推算指定日期之后的第N天是什么日期。
输入：
  年 月 日
  N
输出：
（年月日+N天后的）年.月.日
*/
#include <stdio.h>
main(){
	static int d_tab[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},
                             {0,31,29,31,30,31,30,31,31,30,31,30,31}}; 
	 int y,m,d,a,n,b;
	 scanf("%d%d%d",&y,&m,&d);
	 scanf("%d",&n);
	 int i,j;
	 j=n/365;y=y+j;n=n-365*j;
	 for(b=y-j;b<y;b++){
		 if((b%4==0&&b%100!=0)||b%400==0) n--;
	 }
	 b=y-j;
	 if(b%4==0&&b%100!=0||b%400==0){
		 if(m>2&&j!=0) 
			 n++;
	 }
	 i=(y%4==0&&y%100!=0)||y%400==0;
	 a=d_tab[i][m]-d;
	 printf("%d\n",a); 
	 if(n>=0&&n<=a){
		 printf("%d.%d.%d\n",y,m,d+n);
		 return 0;
	 }else  if(n<0&&n+d>0){
		 printf("%d.%d.%d\n",y,m,d+n);
		 return 0;
	 }else if(n>0){    
		 if(m==12){
			 m=1;y++;
		 }else{
			 m++;
		 }
		 n-=a;
		 for(;m<=12&&n>d_tab[i][m];m++){ 
			 n-=d_tab[i][m];
			 if(m==12){
				 m=0;y++;
			 }
			 if(m==11&&n>31){
				 m=0;y++;
				 n-=31;
			 }
		 }
	 }else if(n<0&&n+d<=0){
		 if(m==1){
			 m=13;
			 y--;
		 }
		 m--;
		 n+=d;
		 for(;m<13&&-n>d_tab[i][m];m--){
			 n+=d_tab[i][m];
			 if(m==1&&n<-31){
				 m=12;y--;n+=31;
			 }
		 }
	 }
	if(n>0)
		printf("%d.%d.%d\n",y,m,n);
	if(n<=0)
		printf("%d.%d.%d\n",y,m,n+d_tab[i][m]);
}

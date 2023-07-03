/* 
题目内容：
对于一个五位数a1a2a3a4a5，可将其拆分为三个子数：
sub1=a1a2a3
sub2=a2a3a4
sub3=a3a4a5
例如，五位数20207可以拆分成：
sub1=202
sub2=020（=20）
sub3=207
现在给定一个正整数K，要求你编程求出10000到30000之间所有满足下述条件的五位数，条件是这些五位数的三个子数sub1、sub2、sub3都可被K整除。
输出时请按照由小到大的顺序排列（每行输出一个数）。
输入格式：
一个正整数K
输出格式：
请按照由小到大的顺序排列（每行输出一个数）
输入样例：
15
输出样例：
22555[回车]
25555[回车]
28555[回车]
30000[回车]
*/
#include <stdio.h>
int main(){
	int k,a[5],i,j,m,x,y,z;
	scanf("%d",&k);
	for(i=10000;i<=30000;i++){
		m=i;
		for(j=4;j>=0;j--){
			a[j]=m%10;
			m/=10;
		}
		x=(a[0]*100)+(a[1]*10)+(a[2]);
		y=(a[1]*100)+(a[2]*10)+(a[3]);
		z=(a[2]*100)+(a[3]*10)+(a[4]);
		if(	((x%k)==0)&&((y%k)==0)&&((z%k)==0)	){
			printf("%d\n",i);
		}
	}
}
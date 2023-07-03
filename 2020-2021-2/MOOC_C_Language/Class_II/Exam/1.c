/* 
题目内容：
输入两个非负整数m，n（n>=m）
输出[m..n]区间的所有平方数之和。
输入格式:
4,9(回车)
输出格式：
13(回车)
输入样例：
4,9
输出样例：
13
*/
#include <stdio.h>
#include <math.h>
int main(){
	int m,n,i,sum=0;
	double s;
	scanf("%d,%d",&m,&n);
	for(i=m;i<=n;i++){
		s=sqrt(i);
		if(s==(int)s){
			sum+=i;
		}
	}
	printf("%d\n",sum);
}

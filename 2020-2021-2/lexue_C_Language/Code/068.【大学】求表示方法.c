/*
设 m、n 均为大于 0 的整数，m 可表示为一些不超过 n 的整数之和，f(m,n) 为这种表示方式的数目。
例如，f(5,3)=5，有 5 种表示方法：3+2，3+1+1，2+2+1，2+1+1+1，1+1+1+1+1。
请编写程序，计算 f(m,n) 的值。
输入：
          m n
输出：
          f(m,n)的值
*/
#include<stdio.h>
int f(int m,int n){
	if(m==1)
		return 1;
	if(n==1)
		return 1;
	if(m<n)
		return f(m,m);
	if(m==n)
		return 1+f(m,n-1);
	return f(m,n-1)+f(m-n,n);
}
int main(){
	int m,n,count;
	scanf("%d %d",&m,&n);
	count=f(m,n);
	printf("%d\n",count);
}

/*
题目内容：
  编程实现输入一个自然数，若为偶数，则把它除以2；若为奇数，则把它乘以3加1。经过如此有限次运算后，总可以得到自然数值1。输出经过多少次可以得到自然数1和每次得到的值。
输入格式：
  输入一个自然数
输出格式：
  输出经过多少次可以得到自然数1和每次得到的值
输入样例：
22[回车]
输出样例：
22,11,34,17,52,26,13,40,20,10,5,16,8,4,2,1[回车]
step=16[回车]
*/ 
#include <stdio.h>
int n,step=1;
int main(){
	scanf("%d",&n);
	printf("%d,",n);
	a:
	if(n%2!=0){
		n=n*3+1;
		step+=1;
		printf("%d,",n);
		goto a;
	}else{
		n/=2;
		step+=1;
		if(n==1){
			printf("%d\n",n);
			printf("step=%d\n",step);
			goto end;
		}else{
			printf("%d,",n);
			goto a;
		}
	}
	end:
	return 0;
}

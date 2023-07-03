/* 
题目内容：
  输入两个整数m,n，用递归算法实现计算两个数的最大公约数。
输入格式:
  输入两个整数m,n
输出格式：
  最大公约数
输入样例：
12,40[回车]
输出样例：
4[回车]
*/
#include <stdio.h>
int main(){
	int lcm();
	int m,n;
	scanf("%d,%d",&m,&n);
	printf("%d\n",lcm(m,n));
}

int lcm(int m,int n){
	if(m%n==0){
		return n;
	}else{
		return lcm(n,m%n);
	}
}

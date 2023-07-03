/*
题目内容：
  编程调用递归函数，求输入一个数，输出这个数的各位数字之和。
输入格式：
  输入一个数
输出格式：
  输出这个数的各位数字之和
输入样例：
2354[回车]
输出样例：
14[回车]
*/
#include <stdio.h>
int DigitSum(int x){
	if (x > 9){
		return x % 10 + DigitSum(x / 10);
	}
	else
		return x;
}
int main(){
	int num;
	scanf("%d",&num);
	int ret = DigitSum(num);
	printf("%d\n", ret);
	return 0;
}

/*
题目内容：
  编写程序，在主函数中输入两个正整数 a,b，调用两个函数 fun1() 和 fun2()，分别求 a 和 b 的最大公约数和最小公倍数，在主函数中输出结果。
输入格式：
  两个正整数
输出格式：
  最大公约数和最小公倍数
输入样例： 
12,40[回车]
输出样例：
最大公约数：4[回车]
最小公倍数：120[回车]
*/
#include <stdio.h>
int fun1(int a,int b){
	while(a!=b){
        if(a>b)
            a-=b;
        else
            b-=a;
    }
	return a;
}
int fun2(int a,int b){
	int c;
	c=(a*b)/fun1(a,b);
	return c;
}
int main(){
	int a,b;
	int fun1();int fun2();
	scanf("%d,%d",&a,&b);
	printf("最大公约数：%d\n",fun1(a,b));
	printf("最小公倍数：%d\n",fun2(a,b));
}

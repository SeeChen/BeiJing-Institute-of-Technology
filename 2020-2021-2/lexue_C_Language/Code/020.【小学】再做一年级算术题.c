/*
 小明上小学一年级了，老师已经教会了他们进行整数的 +、-、*、/ 、% 计算，下面老师开始出题，给出一个简单的算术表达式，请小明给出计算结果，请你用 switch 语句编写一个程序，帮小明算出结果。
输入：
    操作数1 op 操作数2
输出：
    计算结果
提示： 
    关键是在表达式输入过程中如何取出运算符?
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	float d1,d2;
	char op;
	scanf("%f %c %f",&d1,&op,&d2);
	switch( op){
		case '+':
			printf("%g + %g = %g\n",d1,d2,d1+d2);break;
		case '-':
			printf("%g - %g = %g\n",d1,d2,d1-d2);break;
		case '*':
			printf("%g * %g = %g\n",d1,d2,d1*d2);break;
		case '/':
			printf("%g / %g = %g\n",d1,d2,d1/d2);break;
		case '%':
			printf("%g %% %g = %d\n",d1,d2,(int) d1 % (int) d2);break;
		default:
			printf("unkown op\n");break;
	}
	return 0;
}

/*
printf函数和scanf函数是C语言中最常用的函数之一，下面让我们练习一下吧。
输入：
    整型变量x的值。
输出：
    输出整型变量x对应的十进制、八进制和十六进制形式。
认真看看 -1 的八进制和十六进制输出，请想想是为什么。
*/
#include <stdio.h>    
int main(){     
    int x;     
    scanf("%d",&x);     
    printf("x=%d,x=%o,x=%x\n",x,x,x);   
}  

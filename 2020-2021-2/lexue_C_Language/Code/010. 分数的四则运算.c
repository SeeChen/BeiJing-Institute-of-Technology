/*
在小学时我们就学习了分数的四则运算，即对两个分数进行加、减、乘、除等运算，现在我们尝试下用C语言来实现。
输入：
    分数1 操作符 分数2
输出：
    计算结果
要求：
计算结果使用分数表示，并且为最简化。例如结果为2/6，则被简化为1/3
*/
#include <stdio.h>  
int main(){  
    int a1,a2,b1,b2,a,b,x1,x2;  
    char calc;  
    scanf("%d/%d %c %d/%d",&a1,&b1,&calc,&a2,&b2);  
    if(b1!=b2){  
        b=b1*b2;  
        x1=a1*b2;  
        x2=a2*b1;  
    }else{  
        x1=a1;  
        x2=a2;  
        b=b1;  
    }  
    switch(calc){  
        case '+':  
            a=x1+x2;  
            break;  
        case '-':  
            a=x1-x2;  
            break;  
        case '*':  
            a=a1*a2;  
            b=b1*b2;  
            break;  
        case '/':  
            a=a1*b2;  
            b=b1*a2;  
            break;  
        default:  
            break;  
    }  
    int i=a>b?a:b;  
    for(i;i>1;i--){  
        if((a%i==0)&&(b%i==0)){  
            a/=i;  
            b/=i;  
        }  
    }  
    if(a==0){  
        printf("%d/%d %c %d/%d = 0\n",a1,b1,calc,a2,b2);  
    }else if(b==1){  
        printf("%d/%d %c %d/%d = %d\n",a1,b1,calc,a2,b2,a);  
    }else{  
        printf("%d/%d %c %d/%d = %d/%d\n",a1,b1,calc,a2,b2,a,b);  
    }  
}

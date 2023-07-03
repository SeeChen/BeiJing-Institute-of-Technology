/*
初中的小明已经开始学习求解一元二次方程了，下面让我们来教计算机如何求解。输入 a,b,c ，求一元二次方程 ax²+bx+c=0 的根。
输入：
假设 a，b，c均int。
输出：
要求输出的根为 double 型，保留 6 位小数。
*/
#include <stdio.h>  
#include <math.h>  
int main(){  
    float a,b,c;  
    double x1,x2;  
    scanf("%f %f %f",&a,&b,&c);  
    if(a==0&&b==0)  
        printf("Input error!\n");  
    else if(a==0){  
        x1=-c/b;if(x1==0){x1=0;}  
        printf("x=%.6f\n",x1);  
    }else if(b==0&&c==0){  
        printf("x1=x2=0.000000\n");
    }else{  
        if(((b*b)-(4*a*c))<0){  
            x1=-b/(2*a);  
            x2=sqrt(-((b*b)-(4*a*c)))/(2*a);  
            if(b==0){  
                printf("x1=%.6fi\nx2=-%.6fi\n",x2,x2);}else{  
                printf("x1=%.6f+%.6fi\nx2=%.6f-%.6fi\n",x1,x2,x1,x2);}}else{  
            x1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);  
            x2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);  
            if(x1==x2){  
                printf("x1=x2=%.6f\n",x1);}else{  
                printf("x1=%.6f\nx2=%.6f\n",x1,x2);
            }
        }
    }
}

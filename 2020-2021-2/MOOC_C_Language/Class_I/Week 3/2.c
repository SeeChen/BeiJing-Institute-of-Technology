/*题目内容：
该如何处理double型的数据:如何定义变量类型?如何使用scanf函数？
如果已知圆柱的底面半径r,以及高h,则可计算出圆柱的侧面积,体积。
输入格式:
第一行输入圆柱的底面半径 r
第二行输入圆柱的高 h
输出格式：
s=< 圆柱的侧面积 >,v=< 圆柱的体积 >
要求 
1. 所有变量都定义为双精度类型
2. 结果精确到小数点后两位。
作为练习题目：
我们已经给您编写好了大部分的代码，请您自己修改几个地方，完成程序的剩余部分。
**********************************************分隔线************
#include<stdio.h>
#define PAI  3.1415926
int main(){
    int r,h;
    double s,v;
    scanf("%d %d",                  );
    s=2*PAI*r*h;
    v=PAI*r*r*h;
    printf("s=%.2f,v=       \n",s,     );
    return 0;
}
输入样例：
2
8
输出样例：
s=100.53,v=100.53
*/
#include<stdio.h>
#define PAI  3.1415926
int main()
{
    int r,h;
    double s,v;
    scanf("%d %d",&r,&h);
    s=2*PAI*r*h;
    v=PAI*r*r*h;
    printf("s=%.2f,v=%.2f\n",s, v);
}

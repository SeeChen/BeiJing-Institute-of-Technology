/*
题目内容： 
小明在中学会求一个数的 n 次方了，但计算机还不会，请你来编写一个程序吧。由于计算机比较“笨”，所以我们编写程序的功能不用太强，只要能算出 a 的 n 次方的最后 3 位数就可以了。
输入格式:
a 和 n 的值。假设 a<=150 。
输出格式：
求 a 的 n 次方的最后 3 位数。
提示：再想一想，你的方法对吗？你用的是什么数据类型？
输入样例：
10 0
输出样例：
The last 3 numbers is 1.
*/
#include <stdio.h>
int main()
{
    int a,n,x=1;
    scanf("%d %d",&a,&n);
    for(int i=1;i<=n;i++){
        x=x*a%1000;
    }
    printf("The last 3 numbers is %d.",x);
}

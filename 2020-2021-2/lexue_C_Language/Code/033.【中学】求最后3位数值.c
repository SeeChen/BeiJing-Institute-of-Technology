/*
小明在中学会求一个数的 n 次方了，但计算机还不会，请你来编写一个程序吧。由于计算机比较“笨”，所以我们编写程序的功能不用太强，只要能算出 a 的 n 次方的最后 3 位数就可以了。
输入：
    a 和 n 的值。假设 a<=150 。
输出：
    求 a 的 n 次方的最后 3 位数。
*/
#include <stdio.h>  
int main(){  
    int n,N,i,r=1;  
    scanf("%d%d",&n,&N);  
    n%=1000;   
    for(i = 0; i < N; i ++)  
        r=r*n%1000;  
    if(r==0)  
        printf("The last 3 numbers is 00%d.\n", r);  
    else   
        printf("The last 3 numbers is %d.\n", r);  
    return 0;  
}

/*
现在要用最简单得办法，在一行中输出N个星号。
输入：
N值
输出：
一行中N个星号。
*/
#include<stdio.h>    
int main(){    
    int n;    
    scanf("%d",&n);    
    for(int i=0;i<n;i++)    
        printf("*");    
    printf("\n");    
}

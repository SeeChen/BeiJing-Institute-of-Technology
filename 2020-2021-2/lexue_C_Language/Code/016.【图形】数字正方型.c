/*
这是双重循环的入门题目，大家来看看，你会做吗？
输入 n 的值，输出如下例（ n=4 ）所示的由数字组成的正方型。
  1  2  3  4
  5  6  7  8
  9 10 11 12
 13 14 15 16
输入：
    n
输出：
   数字组成的正方型
*/
#include <stdio.h>    
int main(){    
    int n,i,j,k;    
    scanf("%d",&n);    
    for(i=1;i<=n*n;i++){    
        if((i!=1)&&((i-1)%n==0))    
            printf("\n");    
        printf("%3d",i);    
    }  
    printf("\n");  
}

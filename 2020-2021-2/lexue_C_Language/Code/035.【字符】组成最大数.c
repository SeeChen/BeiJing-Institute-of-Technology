/*
任意输入一个自然数，输出该自然数的各位数字组成的最大数。例如，输入 1593 ，则输出为 9531 。
输入：自然数 n
输出：各位数字组成的最大数
*/
#include <stdio.h>  
#include <string.h>  
int main(){  
    char a[100];  
    scanf("%s",a);  
    int i,j,k,len=strlen(a);  
    for(i=0;i<len;i++){  
        for(j=i+1;j<len;j++){  
            if(a[j]>a[i]){  
                k=a[i];  
                a[i]=a[j];  
                a[j]=k;  
            }  
        }  
    }  
    puts(a);  
}

/*
背景：
输入一个长度不超过 100 的字符串，删除串中的重复字符。
输入：
输入要检查的字符串，长度不超过100个字符。例如：abacaeedabcdcd。
输出：
删除重复字符后的字符串。例如：abced。
*/
#include <stdio.h>      
#include <string.h>         
int main(){      
    char a[100];  
    int i,j,n;      
    char k;      
    gets(a);  
    int f=strlen(a);    
    for(i=0;i<strlen(a);i++){  
        for(n=0;n<i;n++){  
            if(a[i]==a[n]){    
                for(j=i;j<f;j++){  
                    a[j]=a[j+1];   
                }    
                i -= 1;
                break;  
            }
        }
    }
  puts(a);      
  return 0;
}  

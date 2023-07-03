/*
输入字符串s和t（串长不超过80个字符），将在字符串s中出现，但未在字符串t中出现的字符组成一个新的字符串放在u中，u中字符按原字符串中字符顺序排列，不去掉重复字符，输出u。
例如：当s="112345"，t="2467"时，u="1135"。
输入：
　　第一行为串s
　　第二行为串t
输出：
      串u
*/
#include <stdio.h>
int main()  
{  
    int i,j,m=0,flag=0;  
    char a[100],b[100],c[100];  
    gets(a);  
    gets(b);  
    for(i=0;a[i]!='\0';i++)  
    {    flag=0;  
        for(j=0;b[j]!='\0';j++)  
        {  
            if(a[i]==b[j])  
            {  
                flag=1;  
                break;  
            }  
        }  
        if(flag==0)  
        {  
            c[m]=a[i];  
            printf("%c",c[m++]);  
        }  
    }  
    printf("\n");  
}  

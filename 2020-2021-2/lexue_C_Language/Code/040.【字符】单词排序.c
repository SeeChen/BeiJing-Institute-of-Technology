/*
   输入 5 个单词，将它们按从大到小的顺序排列后输出。
输入：
    5个单词
输出：
    排序后的顺序
*/
#include<stdio.h>  
#include<string.h>  
int main(){
    char a[6][20];  
    for(int i=0;i<5;i++)  
    {  
        scanf("%s",a[i]);  
    }  
    for(int i=0;i<4;i++)  
    {  
        for(int j=0;j<4-i;j++)  
        {  
            if(strcmp(a[j],a[j+1])<0)  
            {  
                strcpy(a[5],a[j]);  
                strcpy(a[j],a[j+1]);  
                strcpy(a[j+1],a[5]);  
            }  
        }  
    }  
    for(int i=0;i<5;i++){  
        printf("%s\n",a[i]);   
    }  
    return 0;  
}  

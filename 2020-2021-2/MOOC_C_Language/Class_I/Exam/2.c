/*
题目内容：
我们经常在编辑各种文档时发现拼写错误，需要将错误的字符串替换为正确的字符串。
连续输入三个字符串，在第一个字符串中查找第二个字符串，如果存在，就将之替换为第三个字符串。
输出被更正后的第一个字符串。
（ABC的长度均不超过1000）.
（提示，请考虑一些特殊情况，例如
AAAAA
AA
ADA
你应该输出：ADADADADA，而不是ADAADAA。
如果输入的第三个字符串为空，那么相当于在第一个字符串中删除掉第二个字符串。
例如：
输入：
ABCDEFG       
DE
（空字符串）
那么你应该输出：ABCFG）
输入格式:
ABCDEFG[回车] 
DE[回车]
KKK[回车]
输出格式：
ABCKKKFG[回车]
输入样例：
ABCDEFG
DE
KKK
输出样例：
ABCKKKFG
*/
#include <stdio.h>
#include <string.h>
int main(int argc,char *argv[]){
    char a[300],b[50],c[50],t[300],*pt;
    int lb;
    scanf("%100s%50s%50s",a,b,c);
    lb=strlen(b);
    while(pt=strstr(a,b)){
        strcpy(t,pt+lb);
        strcpy(pt,c);
        strcat(a,t);
    }
    puts(a);
}

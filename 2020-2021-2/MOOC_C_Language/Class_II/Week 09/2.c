/* 
题目内容：
    请用标准设备文件的方式完成字符串的输入与反向显示。
输入格式：
    字符串
输出格式：
    字符串
输入样例：
abc[回车]
输出样例：
cba[回车]
*/
#include<stdio.h>
void reverse(char *str){
    char temp;
    char* end = str;
    if(str){
        while(*end != '\0')
            ++end;
    }
    --end;
    while(str < end){
        temp = *end;
        *end-- = *str;
        *str++ = temp;
   }
}
int main(){
    char text[100];
    gets(text);
    reverse(text);
    puts(text);
}

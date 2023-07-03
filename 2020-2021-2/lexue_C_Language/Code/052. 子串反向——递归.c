/*
请编写一个递归函数 reverse(char str[], int start, int end ) ，该函数的功能是将串 str 中下标从 start 开始到 end 结束的字符颠倒顺序。假设 start 和 end 都在合理的取值范围。
例如：
执行前：str[]="0123456"；start=1 ；end=4
执行后：strr[]="0432156"
要求在该函数中不使用新的数组，没有循环。
注意：只需要编写递归函数 reverse，系统中已经设置好了main函数。
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverse( char *, int, int );
int main( ){	char str[100];
	int start, end;
	scanf("%s",str);
	scanf("%d%d", &start, &end);
	reverse( str, start, end );
	printf("%s\n", str);
	return 0;
}
void reverse(char * str, int start, int end){
    if(end >= strlen(str))
        end = strlen(str) - 1;
    if(end - start > 0){
        char tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;
        return reverse(str, start + 1, end - 1);
    }
}

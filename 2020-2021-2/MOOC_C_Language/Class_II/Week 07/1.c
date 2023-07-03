/*
题目内容：
    先定义一张字母加密对照表。将需要加密的一行文字输入加密程序，程序根据加密表中的对应关系，可以很简单地将输入的文字加密输出，对于表中未出现的字符则不加密。
字母加密对照表
输入 a b c d e i k ; w
输出 d w k ; i a b c e
输入格式：
  字母
输出格式：
  字母
输入样例1：
abc[回车]
输出样例1：
dwk[回车]
输入样例2：
de[回车]
输出样例2：
;i[回车]
*/
#include <stdio.h>
#include <string.h>
struct s
{
    char x;
    char y;
};

int main()
{
    struct s
    t[9]={{'a','d'},{'b','w'},{'c','k'},{'d',';'},
    {'e','i'},{'i','a'},{'k','b'},{';','c'},{'w','e'}};
    int i,j;
    char c[100];
    gets(c);
    for(i=0;c[i]!='\0';i++){
        for(j=0;;j++){
            if(c[i]==t[j].x){
                printf("%c",t[j].y);
				break;
            }
	if(j==8){
                printf("%c",c[i]);break;
            }
        }
    }
	printf("\n");
}

/* 
题目内容：
    从键盘输入两个字符串，输出第二个串在第一个串中出现的次数。如果没有，输出“No”。
输入格式：
    输入两个字符串
输出格式：
    输出第二个串在第一个串中出现的次数。
    如果没有，输出 No
输入样例1：
This is his book[回车]
is[回车]
输出样例1：
3[回车]
输入样例2：
This is my book[回车]
at[回车]
输出样例2：
No[回车]
*/
#include<stdio.h>
#include<string.h>

int main(){
	char s[50];
	char st[20];
	int m,n;
	gets(s);
	gets(st);
	int i=0,j=0;
	m=strlen(s);
	n=strlen(st);
	int count=0;
	while(i<m){
		if(s[i]==st[j]){
		++i;++j;
	}else{
		i=i-j+1;j=0;
	}
	if(j>=n)
		count++;
	}
	if(count==0)
		printf("No\n");
	else
		printf("%d\n",count);
}

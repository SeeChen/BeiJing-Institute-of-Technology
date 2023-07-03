/*
有一种特殊形式的字符串，其正反序相同，被称为“回文字符串”。例如LeveL就是一个回文字符串。
输入： 
          字符串
输出：
          Yes或者No
说明：
          如输出Yes，说明输入的字符串是一个回文字符串
          输出No，说明输入的字符串不是一个回文字符串
          请使用递归算法实现。
*/
#include<stdio.h>
#include<math.h>
#include <string.h>
int re(char *p){
	char *q=p;
	while(*q!='\0')
		q++;
	if(q==p)
		return 1;
	q--;
	if(*p==*q){
		*q='\0';
		return re(p+1);
	}else
		return 0;
}
int main(){
	char str[100];
	gets(str);
	if(re(str))
		printf("Yes\n");
	else
		printf("No\n");
}

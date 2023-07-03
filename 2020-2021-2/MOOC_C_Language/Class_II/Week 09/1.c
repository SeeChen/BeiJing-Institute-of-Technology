/*
题目内容： 
    输入一个字符串，要求将其中的字母‘n’理解为回车符号’\n’，模拟文件缓冲区读取的数据，并按替换后的数据流解析出其中包括的字符串。（即通过'n'分割两个字符串）
输入格式：
    一个字符串
输出格式：
    其中包括的字符串
输入样例：
abcnde[回车]
输出样例：
abc[回车]
de[回车]
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	int i,j,k;
	char a[100];
	gets(a);
	k=strlen(a);
	for(i=0;i<k;i++){
		if(a[i]=='n'){
			if(a[i-1]!='n')
				printf("\n");
		}else
			printf("%c",a[i]);
	}
	if(a[k-1]!='n')
		printf("\n");
}

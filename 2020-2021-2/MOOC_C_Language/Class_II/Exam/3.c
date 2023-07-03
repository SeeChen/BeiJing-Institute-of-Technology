/*
题目内容：
给定一个字符串，以中心对称左右字母分别比较大小，如果左边大于右边则对调，如最后一位有符号保持该位不变。
输入格式:
goxd!(回车)
输出格式：
doxg!(回车)
输入样例： 
goxd!
输出样例：
doxg!
*/
#include <stdio.h>
#include <string.h>
#define N 100
int main(){
	char c[N],c1[N]={'\0'};
	int i,j;
	gets(c);
	for(i=0;c[i]!='\0';i++);
	--i;
	strcpy(c1,c);
	if((c[i]<'a'||c[i]>'z')&&(c[i]<'A'||c[i]>'Z')){
		c1[i]=c[i];
		c[i]='\0';
		--i;
	}
	for(j=0;j<i;j++,i--)
		if(c[j]>c[i]){
			c1[j]=c[i];
			c1[i]=c[j];
		}
	puts(c1);
}

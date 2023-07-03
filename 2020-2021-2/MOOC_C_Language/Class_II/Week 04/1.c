/*
题目内容：
    从键盘输入一个字符串，判断是否为对称字符串，若是输出“YES”，若不是输出“NO”
输入格式：
    一个字符串
输出格式：
    YES or NO
输入样例1：
abcdedcba[回车]
输出样例1：
YES[回车]
输入样例2：
1234432[回车]
输出样例2：
NO[回车]
*/
#include<stdio.h>
int strlen(char *a){
	char *p=a;
	while(*p!='\0')p++;
	return p-a;
	
} 
int main(){
	char a[20];
	scanf("%s",a);
	int l=strlen(a);
	int i=0;
	int r=l-1;
	while(i<r){
	if(a[i]!=a[r]){
		printf("NO\n");
		return 0;
	}
	else{
	
	i++;
	r--;
	}}
 
	printf("YES\n");
}

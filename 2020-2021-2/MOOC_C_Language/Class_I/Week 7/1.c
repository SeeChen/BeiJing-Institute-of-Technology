/*
题目内容： 
任意输入一个自然数，输出该自然数的各位数字组成的最大数。
输入格式：
自然数 n
输出格式：
各位数字组成的最大数
输入样例：
1593
输出样例：
9531[回车]
*/
#include <stdio.h>
int main(){
	char a[50]={0};int n=0,t;
	scanf("%s",a);
	while(a[n]!='\0'){
		n++;
	}
	for(int i=0;i<(n-1);i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("%s\n",a);
}

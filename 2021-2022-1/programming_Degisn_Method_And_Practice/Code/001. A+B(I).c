/*
Description
学过《计算机科学导论》的你应该熟悉“二进制运算”吧？
和十进制不同的是：二进制运算“逢二进一”。下面举一个二进制加法的运算实例:
   11101
+    110
--------
  100011
下面请你模拟这个过程。
Input
第一行输入一个正整数 T 空格 左括号 1 小於等於 T 小於等於 10 右括号，表示接下来有 T 组数据；
接下来 T 行，每行输入两个二进制串 a 和 b 中间用空格隔开，保证它们长度 1 小於等於 竖线 a 竖线 逗號 空格 竖线 b 竖线 小於等於 10 的 5 次方 并且没有前导 0。
Output
对于每组数据，请按模拟二进制加法，按题目描述的格式输出正确的运算结果，注意换行，没有多余的空格和换行。
*/
#include <stdio.h>
#include <string.h>
#define uuzu 100005
void printfDash(int n){
	for(int i=0;i<n;i++)
		printf("-");
	printf("\n");
}
void printfSpace(int n){
	for(int i=0;i<n;i++)
		printf(" ");
}
int main(){
	int T;
	for(scanf("%d",&T);T;T--){
		char x[uuzu]={'\0'},y[uuzu]={'\0'},xx[uuzu]={'\0'},yy[uuzu]={'\0'},ans[uuzu]={'\0'},ansR[uuzu]={'\0'};
		int digitX,digitY,i,j,carry=0,sub=0,sum,ansLen,k=-1;
		scanf("%s %s",x,y);
		while(x[0]=='0'){
			i=0;
			if(x[1]=='\0')
				break;
			while(x[i]!='\0'){
				x[i]=x[i+1];
				i++;
			}
		}
		while(y[0]=='0'){
			i=0;
			if(y[1]=='\0')
				break;
			while(y[i]!='\0'){
				y[i]=y[i+1];
				i++;
			}
		}
		digitX=strlen(x);
		digitY=strlen(y);
		j=digitX;
		i=-1;
		while(j!=0){
			xx[++i]=x[--j];
		}
		j=digitY;
		i=-1;
		while(j!=0){
			yy[++i]=y[--j];
		}
		while(sub<digitX&&sub<digitY){
			sum=xx[sub]+yy[sub]+carry-2*'0';
			ans[sub]='0'+sum%2;
			carry=sum/2;
			sub++;
		}
		if(digitX>digitY){
			while(sub<digitX){
				sum=xx[sub]+carry-'0';
				ans[sub]='0'+sum%2;
				carry=sum/2;
				sub++;
			}
		}else if(digitX<digitY){
			while(sub<digitY){
				sum=yy[sub]+carry-'0';
				ans[sub]='0'+sum%2;
				carry=sum/2;
				sub++;
			}
		}
		if(carry!=0)
			ans[sub++]=carry+'0';
		ans[sub]='\0';
		j=ansLen=strlen(ans);
		i=-1;
		while(j!=0){
			ansR[++i]=ans[--j];
		}
		printfSpace(ansLen-digitX+2);
		printf("%s\n",x);
		printf("+");
		printfSpace(ansLen-digitY+1);
		printf("%s\n",y);
		printfDash(ansLen+2);
		printf("  %s\n",ansR);
	}
}

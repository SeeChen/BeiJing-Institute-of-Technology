/* 
题目内容：
根据菱型起始字母和菱形的高度，打印空心的由字符组成的菱形。
输入格式:
菱型起始字母和菱形的高度。
输出格式：
参照样例，打印空心的由字符组成的菱形。
输入样例：
C 4
输出样例：
   C[回车]
  D D[回车]
 E   E[回车]
F     F[回车]
 E   E[回车]
  D D[回车]
   C
*/
#include <stdio.h>
int main(){
	char c;int n,i,j;
	scanf("%c %d",&c,&n);
	for(i=1;i<=n;i++){
		for(j=n;j>i;j--){
			printf(" ");
		}
		if(i==1) goto haha;
		printf("%c",c);
		for(j=1;j<(2*i-2);j++){
			printf(" ");
		}
		haha:printf("%c\n",c);
		c++;
	}
	c--;
	for(i=n;i>1;i--){
		c--;
		for(j=n;j>=i;j--){
			printf(" ");
		}
		if(i==2) goto hah;
		printf("%c",c);
		for(j=1;j<(2*i-4);j++){
			printf(" ");
		}
		hah:printf("%c\n",c);
	}
}

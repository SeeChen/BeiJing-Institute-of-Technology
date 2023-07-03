/*
输入图形的行数、以及大写英文字母，输出由字母组成的以下图形。
例如输入: 6 W
输出:
W                   W
K X               X K
J   Y           Y   J
I     Z       Z     I
H       A   A       H
G F E D C B C D E F G
*/
#include<stdio.h>
#include<string.h>
int main(){
	char a[100][100],c,ch;
	int n,i,j;
	memset(a,' ',sizeof(a));
	scanf("%d %c",&n,&ch);
	for(i=0;i<n;i++){
		a[i][i] = a[i][2*n-2-i] = ch++;
		if(ch>'Z'){
			ch = 'A';
		}
	}
	for(i=1;i<n;i++){
		a[n-1][n-1-i] = a[n-1][n-1+i] = ch++;
		if(ch>'Z'){
			ch = 'A';
		}
	}
	for(i=n-2;i>0;i--){
		a[i][0] = a[i][2*n-2] = ch++;
		if(ch>'Z'){
			ch = 'A';
		}
	}
	for(i=0;i<n;i++){
		printf("%c",a[i][0]);
		for(j=1;j<2*n-1;j++){
			printf(" %c",a[i][j]);
		}
		printf("\n");
	}
}

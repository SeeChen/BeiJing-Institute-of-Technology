/*
将数字 1～ 9 分成 3 个三位数，要求第 2 个三位数是第1个三位数的两倍，第3个三位数是第1个的三倍。即假定m为第 1个三位数，则第2个恰好为2*m， 第3个为 3*m，请输出这几个三位数。
输入：第一个三位数的数字
输出：满足题目条件的所有三位数 
*/
#include <stdio.h>
void t(int n,int v[]){
	while(n){
	v[n%10]++;
	n/=10;
	}
}
void f(int x){
	for(int i=x;i<x+100;i++){
		int a = i;
		int b = i*2;
		int c = i*3;
		int v[10]={0};
		t(a,v);
		t(b,v);
		t(c,v);
		int j;
		for(j=1;j<=9;j++){
			if(v[j]!=1){
				break;
			}
		}
		if(j==10){
			printf("%d,%d,%d\n",a,b,c);
		}
	}
}
int main(){
	int x;
	scanf("%d",&x);
	if(x>=4)
		printf("0,0,0\n");
	f(x*100);
	return 0;
}

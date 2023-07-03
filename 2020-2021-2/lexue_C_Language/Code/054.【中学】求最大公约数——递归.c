/*
请使用递归算法计算正整数n和m的最大公约数GCD(n,m)。
　　          = m             当 m<=n 且 n mod m =0
GCD(N,M) = GCD(m,n)   当n<m时
                  = GCD(m, n mod m)     其他
输入：
        n和m
输出： 
        n和m的最大公约数
*/
#include <stdio.h>
int GCD(int,int);
int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	printf("%d\n",GCD(m,n));
}

int GCD(int m,int n){
	if(m<=n&&n%m==0){
		return m;
	}else if(n<m){
		return GCD(n,m);
	}else{
		return GCD(m,n%m);
	}	
}

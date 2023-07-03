/*
下面程序是编程题大家做游戏的递归版。
数组a保存小孩的编号。
函数game(int n, int m, int k)的功能是 n 个小孩围成一个圆圈，从下标为 m 的小孩开始报数，报到 k 时，该小孩退出圈外。函数返回留在圈中最后一个小孩的编号。
程序中存在错误，请调试程序改错。
*/
#include <stdio.h>
int a[100];
int game(int n,int m,int k){
	int i,j=0,count=0,g;
	do{
		if(a[m]!=0){
			++j;
			if(j==k)
				a[m]=0;
			m++;
			if(m>n)
				m=0;
		}else
			while(a[m]==0){
				m++;
				if(m>n)
					m=0;
			}
	}while(j<k);
	for(i=0;i<n;i++)
		if(a[i]!=0){
			g=a[i];
			count++;
		}
		if(count==1)
			return(g);
		while(a[m]==0){
			m++;
			if(m>=n)
				m=0;
		}
		return (game(n,m,k));
}
int main(){
	int i,n,r;
	scanf("%d%d",&n,&r);
	for(i=0;i<n;i++)
		a[i]=i+1;
	printf("The left child is NO% d.\n",game(n,0,r));
}

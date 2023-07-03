/*
 请问从一个格子 a 爬到一个格子 b 一共有多少种可行的路线。
输入：
    分别是起始点 a 和终止点 b 的编号。（ a 和 b 在 1~100 之间，且 a<b 。）
输出：
    方案数量。
*/
#include <stdio.h>
#define N 50
int main(){
	int b[N]={0};
	int c[N]={0};
	int i,j,k,n,a1,a2,t,l; 
	b[1]=c[1]=1;
	scanf("%d%d",&a1,&a2); 
	n=a2-a1+1;
	for(j=3;j<=n;j++){
		for(i=1;i<N;i++){
			t=b[i]+c[i];
			if(l==1){
				c[i]=b[i]-1;l=0;
			}else 
				c[i]=b[i]; 
			b[i]=t; 
			if(b[i]>=10){
				l=1; 
				b[i+1]=b[i+1]+1; 
				b[i]=b[i]%10;
			}
		}
	}
	k=N;
	while(b[--k]==0){}
	for(i=k;i>=1;i--)
	printf("%d",b[i]);
	printf("\n");
	return 0;
}

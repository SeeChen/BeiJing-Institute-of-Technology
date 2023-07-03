/*
Description
小张在玩一种卡牌游戏，牌组由 2n 张牌组成，其中 n 张上写有数字 1...n 各一张，其余 n 张上全部是数字 0 。
现在牌组经过随机打乱后，小张拿走其中 n 张牌作为手牌，其余 n 张牌作为牌堆。
小张想经过若干次如下操作使得牌堆自顶向下的牌依次为 1...n 。
每一次操作，小张选择任意一张手牌放到牌堆底，并将牌堆顶的牌放入手牌。
他想知道最少进行几次操作，使得牌堆自顶向下的牌依次为 1...n 。
Input
第一行一个数 n(1 \leq n \leq 200000 ) 。
第二行 n 个数，表示小张手中的牌。
第三行 n 个数，表示牌堆，数组从左向右的顺序表示牌堆自顶向下的顺序。
Output
一个整数，表示最少执行的操作数。
*/ 
#include <stdio.h>
#define N 200005
int main(){
	long n,uzpd[N],pddv[N],least[N]={0},diff[N]={0},numOne=-1,bigIa=0,i,j,flag,point,step,op=1;
	scanf("%ld",&n);
	for(i=0;i<n;i++)
		scanf("%ld",&uzpd[i]);
	for(i=0;i<n;i++){
		scanf("%ld",&pddv[i]);
		if(pddv[i]!=0){
			least[pddv[i]]=i+2;
			diff[pddv[i]]=i+2-pddv[i];
			if(i+2-pddv[i]>=bigIa)
				bigIa=i+2-pddv[i];
		}
		if(pddv[i]==1)
			numOne=i;
	}
	if(numOne==-1){
		flag=point=0;
		step=diff[1]+n;
		for(i=2;i<=n;i++)
			if(diff[i]>point){
				flag=1;
				point=diff[i];
				step=diff[i]+n;
			}
		if(flag==0){
			printf("%ld\n",n);
			return 0;
		}else{
			printf("%ld\n",step);
			return 0;
		}
	}
	for(i=0;i<n-numOne;i++)
		if(pddv[i+numOne] != i+1){
			op=0;
			break;
		}
	if(op==0){
		point=diff[1];
		step=diff[1]+n;
		for(i=2;i<=n;i++){
			if(diff[i]>point){
				point=diff[i];
				step=diff[i]+n;
			}
		}
		printf("%ld\n",step);
		return 0;
	}else{
		flag=0;
		long int startPoint=n-numOne+1;
		for(i=startPoint,j=1;i<=n;i++,j++)
			if(least[i]>j)
				flag=1;
		if(flag==0){
			printf("%ld\n",numOne);
			return 0;
		}else{
			printf("%ld\n",numOne+n+1);
			return 0;
		}
	}
}

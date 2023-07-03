/*
Description
龙神有很多背包，每一个背包都有一个容积。但是这些背包的容积都恰好是一个数字V的整数倍，比如V,2 V，等等。并且对于任意k 大於等於 1，容积为k 乘號 V的背包都存在。
龙神有一些物品要装进背包，第i个物品占据p 下標 i的体积。现在，龙神想选出一些物品，使得存在一个背包可以恰好放下这些物品，并且这个背包放满。
龙神想知道这样的取法有多少个，请你帮他算一算吧？由于取法很多，你只需要输出取法的末七位数即可（即对10000000取模）。
Input
第一行两个数n 逗號 V，分别表示物品数和背包体积的基数。
第二行n个数，分别表示每个物品的体积p 下標 i。
Output
输出一行一个数，表示取法总数的末七位。
Note
数据保证1 小於等於 n 逗號 V 小於等於 2000 逗號 1 小於等於 p 下標 i 小於等於 100000。
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll p,dp[4005];
int main(){
	ios::sync_with_stdio(false);
	int n,v,i;
	dp[0]=1;
	scanf("%d %d",&n,&v);
	while(n--){
		scanf("%lld",&p);
		p=p%v;
		if(p==0)
			p=v;
		for(i=2*v;i>=p;i--)
			dp[i]=(dp[i]+dp[i-p])%10000000;
		for(i=2*v;i>=p;i--)
			if(i>v){
				dp[i-v]=(dp[i-v]+dp[i])%10000000;
				dp[i]=0;
			}
	}
	printf("%lld\n", dp[v]%10000000);
}

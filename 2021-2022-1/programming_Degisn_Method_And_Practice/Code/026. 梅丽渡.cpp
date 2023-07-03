/*
Description
众所周知，strawberry的妹子很多而且总数甚至是不可数的，妹子集合和阿列夫零等势。
今天strawberry把他的 n 个妹子带来，排成一排。strawberry的妹子很多，但是质量不容乐观。每个妹子有美丽度，有正有负。strawberry想选出其中3队妹子，使得她们的美丽度之和最大。每一队都应该是一个连续的区间，而且两队不能同时选择同一个妹子。
strawberry又去找新的妹子了，请你帮帮strawberry算算最大美丽度是多少？
Input
输入一行一个数 n，表示strawberry这次带来的妹子数。接下来一行 n 个数，分别表示每个妹子的美丽度 a 下標 i。
Output
输出一个数，表示最大美丽度。
Note
所有数据保证 3 小於等於 n 小於等於 500000 逗號 負 10 的 9 次方 小於等於 a 下標 i 小於等於 10 的 9 次方。
样例解释：取的三个不相交连续子串分别是{2,3} {1} {1}。
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define N 500005
#define inf 0x3f3f3f3f
ll dp[4][N],a[N],n;
ll maxCmp(ll x,ll y){
	if(x>y)
		return x;
	else
		return y;
}
int main(){
	ios::sync_with_stdio(false);
	ll i,j;
	scanf("%lld",&n);
	for(i=1;i<=n;i++)
		scanf("%lld",&a[i]);
	for(i=0;i<=n;i++)
		dp[0][i]=0,dp[1][i]=0;
	for(i=1;i<=3;i++){
		ll maxBefore=-inf;
		for(j=i;j<=n;j++){
			if(j==i){
				dp[i][j]=dp[i-1][j-1]+a[j];
				continue;
			}
			maxBefore=maxCmp(maxBefore,dp[i-1][j-1]);
			dp[i][j]=maxCmp(dp[i][j-1],maxBefore)+a[j];
		}
	}
	ll max=dp[3][3];
	for(i=3;i<=n;i++)
		if(dp[3][i]>max)
			max=dp[3][i];
	printf("%lld\n",max);
}

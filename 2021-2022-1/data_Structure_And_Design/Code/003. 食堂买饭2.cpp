/*
Description
每逢中午下课，南食堂、北食堂、东食堂就会变得人山人海，窗口前面总是会排起长长的买饭队伍。为了打发时间，同学们喜欢在排队的时候观察前后的其他人。由于同学们的身高不同，较高的同学总是能够轻松观察到更多的人，而较矮的同学的视线很容易受到阻挡。但其实队伍中的两个人之间的互相观察是等价的，即如果A能够观察到B，B也就一定能够观察到A。
为了简化问题，我们假设：在一排队伍中，两个同学能够观察到对方，仅当两人相邻或两人之间的其他同学的身高均低于两人的身高。给出一排队伍所有同学的身高，你想知道这排队伍有多少对同学能够互相观察到对方。
Input
注意：该题目的输入有多组数据！
第一行为一个整数​，代表数据组数。
对于每组数据：
第一行为一个正整数​，代表排队的队伍人数。
第二行有​个正整数​，依次为队伍从前到后的同学的身高。
Output
对于每组数据：第一行输出一个正整数，代表队伍中能够互相观察到对方的同学的对数。
*/
#include<bits/stdc++.h>
#define MAX 200000
using namespace std;
int height[MAX], q[MAX];
int fun(int m,int k){
	int l = 0, r = m, mid, ans = m + 1;
	while(l <= r){
		mid=(l+r) >> 1;
		if(q[mid] >= k){
			ans = mid;
			l = mid + 1;
		}else
			r = mid - 1;
	}
	return ans;
}
int main(){
	int T, n, m;
	scanf("%d", &T);
	for(int i = 1; i <= T; i++){
		long long ans = 0;
		scanf("%d", &n);
		for(int j = 1; j <= n; j++){
			scanf("%d", &height[j]);
		}
		q[0]=0x7fffffff;
		m=0;
		for(int j = 1; j <= n; j++){
			int t = fun(m,height[j]);
			if(t == 0)
				ans += m;
			else
				ans += m - t + 1;
			while(m > 0 && height[j] >= q[m])
				m--;
			q[++m] = height[j];
		}
		printf("%lld\n",ans);
	}
}

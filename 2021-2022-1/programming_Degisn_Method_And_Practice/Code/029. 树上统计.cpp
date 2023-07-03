/*
Background
除了上课答疑之外，给同学们出题也是小学期助教的工作之一，今天又轮到R o a r k出题了。
R o a r k本打算出这样一道题：
“给出一个有n个节点，n - 1条边的连通图，每条边长均为1。求对于所有的点对 (u, v )，sum dist (u, v)。其中dist (u, v)指的是( u , v )之间的最短距离。”
但当他把题目说给D a r k D a w n时，却得到了这样的答复：
http://lexue.bit.edu.cn/pluginfile.php/443733/mod_programming/intro/%E5%BE%AE%E4%BF%A1%E5%9B%BE%E7%89%87_20190810140636.jpg
R o a r k自然不敢违抗D a r k D a w n的命令T^T，只好稍稍增加了一点难度，题目就变成了现在的样子。
Description
给出一个有n个节点，n-1条边的连通图，每条边长均为1。除此之外，现在原图上的每两个不相邻且仅间隔一个节点的节点间建边，边长仍为1。
求对于所有的点对 (u, v )，sum dist (u, v)。其中dist (u, v)指的是( u , v )之间的最短距离。
Input
第一行输入n，表示节点数左小括號 2 小於等於 n 小於等於 200000 右小括號。
接下来n 減 1行每行两个整数a 逗號 b，表示原图在节点a和节点b之间有一条边。
Output
输出 \sum dist(u,v)
*/
#include <bits/stdc++.h>
using namespace std;
#define N 200005
#define ll long long int
vector<ll> edge[N];
ll oddRoot,evenRoot,sizeTree[N],disRoot[N],sum[N],ans;
int dfs1(ll i,ll f){
	for(ll j=0;j<edge[i].size();j++){
		ll temp=edge[i][j];
		if(temp!=f)
			sizeTree[i]+=dfs1(temp,i);
	}
	sizeTree[i]++;
	return sizeTree[i];
}
void dfs2(ll i,ll f,ll r,ll depth){
    for(ll j=0;j<edge[i].size();j++){
		ll temp=edge[i][j];
		if(temp!=f){
			if(depth&1==1)
				oddRoot++;
			else
				evenRoot++;
			disRoot[temp]=depth;
			sum[r]+=(depth%2)+(depth/2);
			dfs2(temp,i,r,depth+1);
		}
	}
}
void dfs3(ll i,ll f){
	for(ll j=0;j<edge[i].size();j++){
		ll temp=edge[i][j];
		ll even=disRoot[i]%2==0?evenRoot:oddRoot-1;
		if(temp!=f){
			sum[temp]=sum[i]+even-sizeTree[temp]+1;
			ans+=sum[temp];
			dfs3(temp,i);
		}
	}
}
int main(){
	ios::sync_with_stdio(false);
	ll n,a,b,r,i;
	scanf("%lld",&n);
	for(i=0;i<n-1;i++){
		scanf("%lld %lld",&a,&b);
		edge[a].push_back(b);
		edge[b].push_back(a);
	}
	r=a;
	dfs1(r,0);
	dfs2(r,0,r,1);
	ans+=sum[r];
	dfs3(r,0);
	printf("%lld\n",ans/2);
}

/*
小军的军训中有着心理素质拓展的环节，该环节上有一个推箱子的游戏，游戏规则如下：
在一排上有n列箱子，每列箱子有a[i]个，每次操作小军可以选择一个没有右侧相邻箱子的箱子，将其向左推动。推动会造成连锁效果，其左侧所有相连的箱子都会被推动；同时，当一个箱子向左移动时，其上方的所有箱子也会随之向左移动。而由于这不是Minecraft，所有浮空的箱子都会落到最下面。 特别地，因为最左侧的箱子不能被推动，所以你的操作不可以导至最左侧的箱子移动。下面是一个示例：
https://uploadfiles.nowcoder.com/images/20200809/329343_1596986352254_E347C2BEA8CEDD3BB15D00541D0076CF
https://uploadfiles.nowcoder.com/images/20200809/329343_1596986364553_E27C0E6AF3F884E005FAE44BB4699B71
https://uploadfiles.nowcoder.com/images/20200809/329343_1596986374049_21A10E668E6994E6DA6C22EC53C00B36
该示例推动了第6列第4个箱子，然后造成了第三张图的效果。
小军可以在满足条件下不断的进行如上的操作，随时都可以停止。小军想让最高的那一列的高度最低，请问这个最小的最大值是多少呢?
输入：
输入第一行包含一个正整数n。
接下来一行n个正整数a[1]...a[n]，表示第i列的高度是a[i]。
 1 \leq n \leq 200000,  1 \leq a[i] \leq 10^9 
输出：
一行包含一个正整数x，表示最高列的最低值是x。
注意：行末无空格，文末有回车
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ios::sync_with_stdio(false);
	ll n,i,pkjy,temp,count,sum;
	scanf("%lld",&n);
	ll a[n];
	pkjy=INT_MAX;
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
		if(a[i]<pkjy)
			pkjy=a[i];
	}
	count=sum=temp=0;
	for(i=0;i<n;i++){
		count+=1;
		sum+=a[i];
		temp=sum/count;
		if(temp>pkjy)
			pkjy=temp;
	}
	printf("%lld\n",pkjy); 
}

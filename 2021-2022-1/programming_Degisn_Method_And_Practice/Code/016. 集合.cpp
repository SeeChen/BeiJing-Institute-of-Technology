/*
Description
想必同学们已经深刻体会到军训的辛苦了，与此同时我们也应该感谢教官们的辛苦付出。现在请你帮助教官小张解决如下问题吧！
马上集合了，但现在同学们分布在操场各个位置。共有 n 位同学，他们在操场的位置可以用 (x_i,y_i) 表示。现在小张想知道对于每一个 i ，前 i 个同学集合应该如何选择位置使得所有同学走的总曼哈顿距离最短。
Input
本题为多组数据。
第一行一个数， T 表示数据组数。
每组数据第一行一个数 n(1 \leq n \leq 500000 ) ，表示同学个数。
接下来 n 行，每行两个数 x_i,y_i(-10^9 \leq x_i,y_i \leq 10^9 ) ，表示每个同学位置。
数据保证所有组数据  \sum n \leq  500000 。
Output
每组数据第一行输出数据组数的信息（见样例）。
之后 n 行，每行一个数，保留4位小数，表示前 i 位同学集合到同一个点最少走的曼哈顿距离。
Notes
 (x_1,y_1),(x_2,y_2) 两点曼哈顿距离为 |x_1-x_2| +|y_1-y_2| 。
*/
#include <cstdio>
#include <cmath>
#include <iostream>
#include <queue>
using namespace std;
#define ll long long int
class A_Class{
	private:
		priority_queue<ll> big;
		priority_queue<ll,vector<ll>,greater<ll>> small;
	public:
		ll vsjm();
		void push(ll loc);
};
ll A_Class::vsjm(){
	int mid;
	if(small.size()==big.size()){
		mid=big.top();
	}else if(small.size()<big.size()){
		mid=big.top();
	}else{
		mid=small.top();
	}
	return mid;
}
void A_Class::push(ll loc){
	if(big.empty()){
		big.push(loc);
		return;
	}
	if(big.size()==small.size()){
		if(loc<=big.top())
			big.push(loc);
		else
			small.push(loc);
	}else if(big.size()>small.size()){
		if(loc<=big.top()){
			small.push(big.top());
			big.pop();
			big.push(loc);
		}else
			small.push(loc);
	}else{
		if(loc>=small.top()){
			big.push(small.top());
			small.pop();
			small.push(loc);
		}else
			big.push(loc);
	}
}
int main(){
	ios::sync_with_stdio(false);
	ll T,t=0;
	scanf("%lld",&T);
	while(T--){
		printf("Case: %lld\n",t+=1);
		A_Class tempX,tempY;
		ll midX,midY,ans=0,n,i,inputX,inputY,umidX,umidY;
		scanf("%lld",&n);
		for(i=0;i<n;i++){
			umidX=midX;umidY=midY;
			scanf("%lld %lld",&inputX,&inputY);
			tempX.push(inputX);tempY.push(inputY);
			midX=tempX.vsjm();midY=tempY.vsjm();
			if(i==0)
				ans=0;
			else if(i%2)
				ans+=(abs(umidX-inputX)+abs(umidY-inputY));
			else
				ans+=(abs(midX-inputX)+abs(midY-inputY));
			printf("%lld.0000\n",ans);
		}
	}
}

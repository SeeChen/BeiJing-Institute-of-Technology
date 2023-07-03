/*
Description
小张是一位推理迷，他非常喜欢看侦探小说与侦探电影。同时他也会玩一些推理游戏，在侦探游戏中，小张需要发掘事件之间的联系。通过一条线索，他能够通过事件A推理出事件B。如果通过某一个事件A能够推出事件A本身，那么他就能够完成推理。现在按照顺序给出 m 条线索，请你算出他最少能够用前几条线索能够形成逻辑闭环完成推理。
Input
第一行 n,m(1 \leq n,m \leq 300000 ) 两个数，表示事件数和线索数。
接下来 m 行，每行两个数 A,B(1 \leq A,B \leq n ) ，表示事件A能够推出事件B。
Output
一行一个数，表示最少能够用前几条线索形成逻辑闭环完成推理。若无法完成输出-1。
*/
#include <bits/stdc++.h>
#define N 300005
using namespace std;
struct mark{
	int event;
	bool visit;
	mark(int event_,bool visit_){
		event=event_;
		visit=visit_;
	}
};
struct event{
	public:
		int eventA;
		int eventB;
};
vector<mark> r[N];
queue<int> q;
bool bfs(int a,int b){
	q.push(b);
	while(!q.empty()){
		int temp=q.front();
		for(long i=0;i<r[temp].size();i++)
			if(r[temp][i].visit==0){
				if(r[temp][i].event==a)
					return true;
				r[temp][i].visit = 1;
				q.push(r[temp][i].event);
			}
		q.pop();
	}
	return false;
}
int main(){
	ios::sync_with_stdio(false);
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=0;i<m;i++){
		event temp;
		scanf("%d %d",&temp.eventA,&temp.eventB);
		r[temp.eventA].push_back((mark(temp.eventB,0)));
		bool ans=bfs(temp.eventA,temp.eventB);
		if(ans){
			cout << i + 1 << endl;
			return 0;
		}
	}
	cout << -1 << endl;
}

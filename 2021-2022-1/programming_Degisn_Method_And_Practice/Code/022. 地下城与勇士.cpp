/*
Description
龙神觉得无聊于是来到了地下城，这里是一个巨大的迷宫，有一些可以通行的路、一些不可以通行的墙，还有一些怪物。虽然龙神可以轻易地干掉这些怪物，但他觉得这样就太没意思了，他观察到这些怪物每 k 秒会消失一次（例如 k 等於 3 时，则第 3 逗號 空格 6 逗號 空格 9 逗號 空格 中线省略号 秒怪物是消失的），每一秒龙神可以选择向上下左右行走一步（不能在原地不动）。龙神想知道在避开全部怪物的条件下，到达出口所需要的最短时间。
Input
第一行输入一个整数 T 空格 左括号 1 小於等於 T 小於等於 10 右括号，代表用例组数。
每组用例的第一行包括三个整数 n 逗號 空格 m 空格 左括号 1 小於等於 n 逗號 空格 m 小於等於 100 右括号 和 ，k 空格 左括号 1 小於等於 k 小於等於 50 右括号 分别表示地下城迷宫的行数、列数、怪物的消失间隔。
接下来的 n 行代表迷宫，.表示可以通行的路，#表示墙，*表示怪物，S表示起点，E代表出口。
Output
输出一个整数，表示龙神走出地下城迷宫的最短时间，如果龙神不能走出迷宫则输出-1。
Source
BITACM2018第一轮积分赛（三）- Problem J
*/
#include <bits/stdc++.h>
using namespace std;
#define N 105
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};
struct node{
	int x,y,z;
	int step;
	node(int x_,int y_,int z_,int step_){
		x=x_;
		y=y_;
		z=z_;
		step=step_;
	}
};
int visit[N][N][50];
char Map[N][N];
int main(){
	int n,m,T,k,i,j,startX,startY;
	scanf("%d",&T);
	while(T--){
		queue<node> que;
		scanf("%d %d %d",&n,&m,&k);
		for(i=0;i<n;++i){
			scanf("%s",&Map[i]);
			for(j=0;j<m;++j)
				if(Map[i][j]=='S'){
					startX=i;
					startY=j;
				}
		}
		memset(visit,0,sizeof(visit));
		que.push(node(startX,startY,0,0));
		visit[startX][startY][0]=1;
		int ans,flag=0;
		while(!que.empty()){
			node temp=que.front();
			que.pop();
			if(Map[temp.x][temp.y]=='E'){
				ans=temp.step;
				flag=1;
				break;
			}
			for(i=0;i<4;++i){
				int x=temp.x+dx[i],y=temp.y+dy[i];
				if((temp.z+1)%k){
					if(x<0 || x>=n || y<0 || y>=m || Map[x][y]=='#' || Map[x][y]=='*' || visit[x][y][(temp.z+1)%k]==1)
						continue;
				}else
					if(x<0 || x>=n || y<0 || y>=m || Map[x][y]=='#'|| visit[x][y][(temp.z+1)%k]==1)
						continue;
				que.push(node(x,y,temp.z+1,temp.step+1));
				visit[x][y][(temp.z+1)%k]=1;
			}
		}
		if(flag)
			cout << ans << endl;
		else
			cout << -1 << endl;
	}
}

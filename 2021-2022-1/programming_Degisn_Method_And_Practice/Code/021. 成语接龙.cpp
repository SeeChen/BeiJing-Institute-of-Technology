/*
Description
小张非常喜欢与朋友们玩成语接龙的游戏，但是作为“文化沙漠”的小张，成语的储备量有些不足。现在他的大脑中存储了 m 个成语，成语中的四个汉字都用一个1000000以内的正整数来表示。现在小张的同学为了考验他给出了他一个成语做开头和一个成语做结尾，如果小张能通过成语接龙的方式说到结尾的成语，他就能够成功完成游戏。他想知道最少能说几个成语能够成功完成游戏。
Input
第一行一个数 m(1 \leq m \leq 300000 ) 。
接下来 m 行，每行4个1000000以内的正整数，表示一个成语。
下一行4个1000000以内的正整数，表示开始成语。
下一行4个1000000以内的正整数，表示结束成语。
保证开始成语和结束成语在小张的成语储备之中。
Output
一行一个整数，表示最少说几个成语能够完成游戏。如果无法完成输出-1。
Notes
三个成语分别是(1,2,3,4)(4,5,6,7)(7,8,9,10)
*/
#include <bits/stdc++.h>
using namespace std;
#define N 300005
struct mark{
	long idiom;
	bool visit;
	mark(long Idiom,bool Visit){
		idiom=Idiom;
		visit=Visit;
	}
};
struct Pos{
	public:
		long id;
		long step;
		Pos(long ID,long Step){
			id=ID;
			step=Step;
		}
};
struct idiom{
	public:
		long idiomA;
		long idiomB;
		long idiomC;
		long idiomD;
};
queue<Pos> q; 
vector<mark> r[N];
int main(){
	long m,i;
	scanf("%ld",&m);
	for(i=0;i<m;i++){
		idiom temp;
		scanf("%ld %ld %ld %ld",&temp.idiomA,&temp.idiomB,&temp.idiomC,&temp.idiomD);
		r[temp.idiomA].push_back(mark(temp.idiomD, 0));
    }
	idiom idiomStart, idiomEnd;
	scanf("%ld %ld %ld %ld",&idiomStart.idiomA,&idiomStart.idiomB,&idiomStart.idiomC,&idiomStart.idiomD);
	scanf("%ld %ld %ld %ld",&idiomEnd.idiomA,&idiomEnd.idiomB,&idiomEnd.idiomC,&idiomEnd.idiomD);
	if(idiomStart.idiomA==idiomEnd.idiomA && idiomStart.idiomB==idiomEnd.idiomB && idiomStart.idiomC==idiomEnd.idiomC && idiomStart.idiomD==idiomEnd.idiomD){
		printf("1\n");
		exit(0);
	}
	if(idiomStart.idiomD==idiomEnd.idiomA){
		printf("2\n");
		exit(0);
	}
	Pos PosStart(idiomStart.idiomD,0);
	q.push(PosStart);
	long min=N;
	while(!q.empty()){
		Pos temp=q.front();
		for(i=0;i<r[temp.id].size();i++){
			if(r[temp.id][i].visit==0){
				if(r[temp.id][i].idiom==idiomEnd.idiomA)
					if(temp.step+3<=min)
						min=temp.step+3;
				r[temp.id][i].visit=1;
				Pos ReturnPos(r[temp.id][i].idiom,temp.step+1);
				q.push(ReturnPos);
			}
		}
		q.pop();
	}
	if(min!=N)
		printf("%ld\n",min);
	else
		printf("-1\n");
}

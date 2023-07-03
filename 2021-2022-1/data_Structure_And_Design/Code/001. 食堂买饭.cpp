/*
Problem Description
某理工大学食堂十分拥挤，唯一的买饭窗口前总是排起一条长队。
同学们有时为了贪图方便，难免动起插队的歪脑筋。当一名同学发现自己同寝室的同学也在排队时，则并不会老实的排到队尾，而是会直接插队到同寝室同学所在位置的最后一个。
本题希望你模拟一下该学校食堂的排队情况。
Input
本题包含多组用例。 每组用例的第一行输入一个整数n(1<=n<=1000)表示校内寝室的数量。 之后有n行，每行含有该寝室内学生的数量m(1<=m<=10)和该寝室内每个学生的学号x1~xm(0<=xi<=999999)。
之后会有若干条操作，操作分为以下三种：
IN x - 学号为x的同学前来排队
OUT - 队伍的第一位同学离开队伍
STOP - 操作结束
当输入的n=0时，输入结束。
Output
每组用例前，输出"Case #k"，其中k表示第k组用例。
对于每次OUT操作，单独一行输出离开队伍的学生学号。
*/
#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1010; 
map <long int, long int> mp;
queue <int> Q;
queue <int> v[MAXN];
int main(){
	int n;
	int count = 1;
	scanf("%d",&n);
	while(n != 0){
		printf("Case #%d\n",count);
		count++;
		mp.clear();
		while(!Q.empty())
			Q.pop();
		for(int i = 1; i <= n; i++){
			int m;
			scanf("%d",&m);
			for(int j = 0; j < m; j++){
				long int y;
				scanf("%ld",&y);
				mp[y] = i;
			}
		}
		char s[5];
		while(1){
			scanf("%s",s);
			if(s[0] == 'S')
				break;
			else if(s[0] == 'I'){
				int x;
				scanf("%ld",&x);
				int id=mp[x];
				if(v[id].empty()){
					Q.push(id);
				}
				v[id].push(x);
			}else{
				int id = Q.front();
				cout << v[id].front() << endl;
				v[id].pop();
				if(v[id].empty()){
					Q.pop();
				}
			}
		}
		scanf("%d",&n);
	}
}

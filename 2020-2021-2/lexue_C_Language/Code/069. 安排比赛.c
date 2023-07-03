/*
题目描述
篮球赛即将打响，cmonkey负责组织篮球赛的对抗安排。现在一共有n支队伍，要求每两支队都要打一场比赛，但是每天一支队只能打一场比赛。为了完成比赛，cmonkey希望知道最少需要打多少天？
输入
输入的第一行是一个整数T，表示有T组用例（T <= 110）。每组用例为一个整数n(1 <= n <= 10000)，表示队伍的数量。
输出 
每组用例输出一行，为最少需要比赛的天数。
*/
#include <stdio.h>
int main(){
	int n;
	int group[110];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&group[i]);
	for(int i=0;i<n;i++){
		if(group[i]==1)
			printf("0\n");
		else if(group[i]%2==0)
			printf("%d\n",group[i]-1);
		else
			printf("%d\n",group[i]);
	}
}

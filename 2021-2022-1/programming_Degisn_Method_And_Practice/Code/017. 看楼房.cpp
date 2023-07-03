/*
Description
小张在暑假时间进行了暑期社会调查。调查的内容是楼房的颜色如何影响人们的心情。于是他找到了一个楼房从左到右排成一排的小区，这个小区一共有 n 栋楼房，每个楼房有一个颜色 c_i 和一个高度 h_i 。小张调查的内容为每次他站在第 i 栋楼和第 i+1 栋楼之间向左看，他记录下此时他看到的楼房颜色数作为他的调查结果。
由于小张在暑假时间沉迷游戏来不及做实地调查，只好拜托你将调查结果告诉他。
Input
本题有多组数据。
每组数据第一行一个整数 n 。表示有 n 栋楼房从左到右排成一排。
第二行 n 个数，表示每个楼房的颜色 (1 \leq c_i \leq 10^6 ) 。
第三行 n 个数，表示每个楼房的高度 (1 \leq c_i \leq 10^9 ) 。
数据保证所有组数据的  \sum{n} \leq 1000000  。
Output
每组数据输出 n 个数，第 i 个数表示他站在第 i 栋楼和第 i+1 栋楼之间向左看，能够看到的楼房颜色数。
Notes
在从左向右看楼房的时候，左边较矮的楼房会被右边较高的楼房挡住。
*/
#include <cstring>
#include <iostream>
#include <stack>
#define N 1000005
using namespace std;
struct house{
	int color;
	int height;
};
int colors[N],iuxm[N];
int main(){
	ios::sync_with_stdio(false);
	int zu,zu_i;
	scanf("%d",&zu);
	for(zu_i=0;zu_i<zu;zu_i++){
		int n,i,Count=0;
		stack<house> a;
		memset(iuxm,0,sizeof(iuxm));
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&colors[i]);
		}
		for(i=0;i<n;i++){
			house temp;
			scanf("%d",&temp.height);
			temp.color=colors[i];
			if(a.empty()||temp.height<a.top().height){
				a.push(temp);
				if(iuxm[temp.color]==0)
					Count++;
				iuxm[temp.color]++;
			}else{
				while(temp.height>=a.top().height){
					iuxm[a.top().color]--;
					if(iuxm[a.top().color]==0)
						Count--;
					a.pop();
					if(a.empty()||temp.height<a.top().height){
						a.push(temp);
						if(iuxm[temp.color]==0)
							Count++;
						iuxm[temp.color]++;
						break;
					}
				}
			}
			printf("%d",Count);
			if(i<n-1){
				printf(" ");
			}
		}
		printf("\n");
	}
}

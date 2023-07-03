/*
Description
小张最近沉迷上一款手机游戏北理工的恶龙。在这个游戏中你通过提升攻击力击败恶龙，打败所有恶龙后你可以获得游戏的胜利。
在这款游戏中，每一条恶龙有一个难度值 x_i 和一个经验值 y_i 。游戏中的英雄具有攻击力 A 。游戏一开始英雄的攻击力 A=0 。打到一条恶龙你的攻击力需要大于难度值 x_i 。在你击败恶龙以后，你的攻击力会增加经验值 y_i 。
当然，你有时需要额外提升你的攻击力，此时你只需氪金1元，就能增长一点攻击力。小张想知道，如果他自己决定挑战恶龙的顺序，要想击败所有恶龙至少需要氪金多少钱？
Input
第一行一个数 n(1 \leq n \leq 200000 ) 。
接下来 n 行每行两个数 x_i,y_i(0 \leq x_i  \leq 1000000, -1000000 \leq y_i \leq 1000000 ) 。
Output
一个整数，表示小张最少需要氪金多少钱。
Notes
直接打败第一条恶龙，此时 A=1 ，花费0元。
直接打败第二条恶龙，此时 A=2 ，花费0元。
氪金3元，此时 A=5 ，打败第三条恶龙，此时 A=3 。
最后直接打败第四条恶龙。
*/
#include <stdio.h>
#include <algorithm>
using namespace std;
#define N 200000
long long int cash=0;
int **XY=new int *[N];
int xy[N],xi[N],yi[N];
bool cmp1(int a[],int b[]){
	if(a[0]!=b[0]) return a[0]<b[0];
	if(a[1]!=b[1]) return a[1]<b[1];
	if(a[2]!=b[2]) return a[2]<b[2];
}
bool cmp2(int a[],int b[]){
	if(a[0]!=b[0]) return a[0]>b[0];
	if(a[1]!=b[1]) return a[1]>b[1];
	if(a[2]!=b[2]) return a[2]>b[2];
}
int main(){
	long long int A=0;
	int i,n,Xy,xY,x,y,pd=0;
	scanf("%lld",&n);
	Xy=0;
	xY=n;
	for(i=0;i<n;i++){
		scanf("%d %d",&x,&y);
		if(y<0){
			xY-=1;
			xy[xY]=x+y;
			xi[xY]=x;
			yi[xY]=y;
			if(xy[xY]<xy[xY+1]&&xY!=0&&xY!=n-1){
				pd=1;
			}
		}else{
			xy[Xy]=x;
			xi[Xy]=x;
			yi[Xy]=y;
			Xy+=1;
		}
	}
	for(i=0;i<n;i++){
		XY[i]=new int[3];
		XY[i][0]=xy[i];
		XY[i][1]=xi[i];
		XY[i][2]=yi[i];
	}
	sort(XY,XY+Xy,cmp1);
	if(pd==1)
		sort(XY+xY,XY+n,cmp2);
	for(i=0;i<n;i++){
		if(A<XY[i][1]){
			cash+=(XY[i][1]-A);
			A+=(XY[i][1]-A)+XY[i][2];
		}else{
			A+=XY[i][2];
		}
	}
	printf("%lld\n",cash);
}

/*
Description
小张经常为了事情太多安排不开而苦恼。现在他手头有 n 项任务，每项任务都有一个开始时间 s_i 和结束时间 e_i 。要想完成一个任务必须从开始时间做到结束时间，并且同一时间小张只能进行一项任务。
小张想知道他最多可以完成几项任务。
Input
第一行一个整数 n(1 \leq n \leq 300000 ) ，表示小张手头任务的个数。
接下来 n 行，每行两个整数 s_i,e_i(1 \leq s_i < e_i \leq 10^9 ) ，表示任务的开始时间和结束时间。
Output
一行一个整数，表示小张最多可以完成几项任务。
*/
#include <stdio.h>
#define N 300000
int startTime[N],endTime[N];
void swap(int *x,int *y){
	int p;
	p=*x;
	*x=*y;
	*y=p;
}
void kksu(int a[],int l,int r,int b[]){
	if(l>=r) return;
	int key=a[l],i=l,j=r;
	while(i<j){
		while(a[j]>=key&&i<j)
			j--;
		while(a[i]<=key&&i<j)
			i++;
		swap(&a[i],&a[j]);
		swap(&b[i],&b[j]);
	}
	swap(&a[l],&a[i]);
	swap(&b[l],&b[i]);
	kksu(a,l,i-1,b);
	kksu(a,i+1,r,b);
}
int main(){
	int n,canDo=0,record=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&startTime[i],&endTime[i]);
	}
	kksu(endTime,0,n-1,startTime);
	for(int i=0;i<n;i++)
		if(record<=startTime[i]){
			record=endTime[i];
			canDo+=1;
		}
	printf("%d\n",canDo);
}

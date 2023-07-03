/*
Description
小张在暑假时间来到工地搬砖挣钱。包工头交给他一项艰巨的任务，将一排砖头按照从低到高的顺序排好。可是小张的力量有限，每次只能交换相邻的两块砖头，请问他最少交换几次能够完成任务？
Input
第一行一个整数 n(1 \leq n \leq 300000 ) ，表示砖头数量。
第二行 n 个整数 a_i(-1000000000 \leq a_i \leq 1000000000 ) ，表示砖头的高度。
Output
一个整数，表示最少交换几次能够完成任务。
*/
#include <stdio.h>
#define N 300005
long long int height[N],count=0,temp[N];
void mergeSort(long long int l,long long int r){
	if(l<r){
		long long int m=l+(r-l)/2;
		mergeSort(l,m);
		mergeSort(m+1,r);
		// https://www.geeksforgeeks.org/merge-sort/
		long long int k=0,i=l,j=m+1;
		while(i<=m && j<=r){
			if(height[i]<=height[j])
				temp[k++]=height[i++];
			else{
				count+=m-i+1;
				temp[k++]=height[j++];
			}
		}
		while(i<=m)
			temp[k++]=height[i++];
		while(j<=r)
			temp[k++]=height[j++];
		for(i=l,j=0;i<=r;i++,j++)
			height[i]=temp[j];
	}
}
int main(){
	long long int n,i;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
		scanf("%lld",&height[i]);
	mergeSort(0,n-1);
	printf("%lld\n",count);
}

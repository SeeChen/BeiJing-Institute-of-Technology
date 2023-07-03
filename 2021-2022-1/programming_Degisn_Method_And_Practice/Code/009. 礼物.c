/*
Description
小张的好朋友小松要过生日了，小张打算为他挑选一件礼物。在市场上他发现有一个珠子手镯的商店很不错。在这家商店会出售特殊的珠子并穿成一个手镯，在货架上珠子排成一排，每一个珠子上有一个小写英文字母。店家有一个特殊的规定，必须在一排珠子中按顺序从左到右挑选。小张心中已经有一个想要送给小松的单词，请你告诉他应该如何挑选珠子使得手镯上珠子的字母组成小张想要的单词。
Input
第一行，一个字符串，表示货架上的一排珠子，仅包含小写英文字母，长度在200000以内。
第二行，一个字符串，表示小张想要的单词，仅包含小写英文字母，长度在10000以内。
Output
输出一行整数，表示小张按照从左到右需要挑选的珠子在货架上的位置。
Notes
从左到右按顺序选出的珠子上的字母为'p'，'p'，'y'，'h'，'a'。串成环形的手镯后可以组成"happy"。
数据保证有解，若有多种选取方法，输出其中字典序最小的一个，比如1 2 3 4比1 3 4 5的字典序小。
提交后查看结果页面错误信息一栏，前4行的编译错误大家不用理会，第5行是关于你的结果的信息。
*/ 
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>
#define M 200010
#define N 10010
char vuzi[M],word[N*2];
int next[M][26],bestAns[N],curAns[N];
bool used[M];
int main(){
	int vuziLen,wordLen,i,j,k,use;
	bool xyhr,best;
	memset(next,-1,sizeof next);
	scanf("%s %s",vuzi,word);
	vuziLen=strlen(vuzi);
	wordLen=strlen(word);
	for(i=0;i<wordLen;i++)
		bestAns[i]=INT_MAX;
	strncat(word,word,N);
	//seq-automaton https://segmentfault.com/a/1190000021980858
	for(int i=vuziLen-1;i>=0;i--){
		for(int j=0;j<26;j++)
			next[i][j]=next[i+1][j];
		next[i][vuzi[i]-'a']=i;
	}
	for(i=0;i<wordLen;i++){
		use=k=0;
		xyhr=best=true;
		memset(used,0,sizeof used);
		for(j=0;j<wordLen;j++){
			if(used[use])
				use++;
			use=next[use][word[i+j]-'a'];
			curAns[k++]=use+1;
			used[use]=true;
			if(use==-1){
				xyhr=false;
				break;
			}
		}
		if(xyhr){
			for(k=0;k<wordLen;k++)
				if(curAns[k]>bestAns[k]){
					best=false;
					break;
				}else if(curAns[k]<bestAns[k])
					break;
			if(best)
				for(k=0;k<wordLen;k++)
					bestAns[k]=curAns[k];
		}
	}
	for(i=0;i<wordLen-1;i++)
		printf("%d ",bestAns[i]);
	printf("%d\n",bestAns[i]);
}

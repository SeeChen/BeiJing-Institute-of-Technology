/*
Description
D a r k D a w n在乐学上出了一道给定括号序列，判断其合法性的问题。
括号序列是由左括号“(”和右括号“)”组成的非空序列。对于一个括号序列很容易判定其合法性。比如“()”、“(())()”、“(()())”、“(()(()))”、“()()()”都是合法的，而“)”、“(”、“(()”、“(()))(”都是非法的。
R o a r k看了一眼题，立刻去饮水机处接了一杯水。
D a r k D a w n意识到他是在暗示这道题太水了，于是立刻把题改了改，增加了一、、难度。
给定 n 个括号序列，两两配对，问最多能组成多少对合法括号序列。（每一个括号序列只能在一对中出现）
R o a r k接完水回来再看了看新题，开始挠头了，快帮帮他！
Input
第一行输入整数 n 左小括號 斜體字 1 斜體字 小於等於 n 斜體字 小於等於 斜體字 100000 右小括號 表示有 n 个括号序列。
接下来 n 行，每行输入一个只由“(”和”)“构成的字符串 s 下標 i 。（字符串长度满足1 小於等於 左 絕對值 s 下標 i 右 絕對值 小於等於 1 e 5）
所有字符串长度总和满足開始樣式 行內 結束樣式 開始樣式 顯示 結束樣式 加總 從 i 對 左 絕對值 s 下標 i 右 絕對值 小於等於 5 e 5。
Output
输出一个整数，表示最大的合法括号序列对数。
Hint
第一组用例可以组成2对合法括号序列，分别是“((   )())”、“(   )”。
*/
#include <stdio.h>
int main(){
	long int n,i,j,x=0,none=0;
	int ugxxLeft[100005],ugxxRight[100005]={0},onlyLeft[100005]={0},onlyRight[100005]={0};
	char kohc;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		while((kohc=getchar())!='\n'){
			if(kohc=='(')
				ugxxLeft[i]+=1;
			else if(ugxxLeft[i]>0)
				ugxxLeft[i]-=1;
			else
				ugxxRight[i]+=1;
		}
		if(ugxxLeft[i]==0&&ugxxRight[i]==0)
			none+=1;
		else if(ugxxLeft[i]==0)
			onlyRight[ugxxRight[i]]+=1;
		else if(ugxxRight[i]==0)
			onlyLeft[ugxxLeft[i]]+=1;
	}
	for(i=0;i<n;i++){
		if(onlyLeft[i]<onlyRight[i])
			x+=onlyLeft[i];
		else
			x+=onlyRight[i];
	}
	x+=none/2;
	printf("%d\n",x);
}

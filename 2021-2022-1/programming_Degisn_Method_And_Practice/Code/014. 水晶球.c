/*
Description
和许多同龄女孩子一样，久莲也喜欢水晶球。
还有 10 天，就是心心念念的他生日了。
久莲希望把全世界最大最好看的水晶球送给他。
她找到了宝石收藏家亚瑟斯，希望能够寻求他的帮助。
亚瑟斯很快被打动了，拿出了精心收集的 n 块美丽的水晶石，这些水晶石初始是长宽高分别为 a 逗號 空格 b 逗號 空格 c 的长方体。亚瑟斯许诺久莲可以从中取走 1 块水晶石作为她礼物的原材料。
同时亚瑟斯有一种魔法，如果这两块长方形水晶石在某一个面能够完美的契合在一起（完美的契合是指这两个长方形面全等），那么可以将它们融合成一块完整的大石头，如果真的实现的话，那么久莲就可能打磨出更大的水晶球啦！
久莲太希望把最美最大的水晶球送给他了，你快帮帮她如何选择吧。
Input
第一行输入一个正整数 n 空格 左括号 1 小於等於 n 小於等於 10 的 5 次方 右括号；
接下来 n 行中，第 i 行输入三个正整数 a 下標 i 逗號 空格 b 下標 i 逗號 空格 c 下標 i 空格 左括号 1 小於等於 a 下標 i 逗號 空格 b 下標 i 逗號 空格 c 下標 i 小於等於 10 的 9 次方 右括号 表示第 i 块水晶石的长宽高。注意可能有两个长得一模一样的水晶石，但是在这种情况下还是将它们视作是两块不同的水晶石。
Output
第一行请输出一个正整数 k 空格 左括号 1 小於等於 k 小於等於 2 右括号，表示久莲选择的水晶球数量。
第二行请输出 k 个正整数，如果 k 等於 1，请输出一个正整数 x 空格 左括号 1 小於等於 x 小於等於 n 右括号 表示久莲选择的水晶石。如果 k 等於 2，则请输出两个正整数 x 逗號 空格 y 空格 左括号 1 小於等於 x 逗號 空格 y 小於等於 n 右括号 （用空格间隔），表示久莲希望亚瑟斯帮她将编号为 x 和 y 的水晶石融合成一块更大的水晶石，并选择用这块水晶石来打磨加工。请注意，这两块水晶石必须满足 “完美契合” 的条件，否则这个选择不合法。如果有多种最优的选择，则你可以输出任意一种合法的最优方案。
Hint
对于样例，如果久莲选择第六个水晶球，那么她可以打磨成半径为 r 等於 2.5 的水晶球，这是最优的选择。
*/
#include <stdio.h>
#include <stdlib.h>
#define N 100005
struct Node{
	long long min;
	long long mid;
	long long max;
	long long id;
}vi[N];
int cmp(const void *a,const void *b){
	struct Node *aa=(struct Node *)a;
	struct Node *bb=(struct Node *)b;
	if(aa->max != bb->max){
		return ( (aa->max) - (bb->max) );
	}else{
		if(aa->mid != bb->mid){
			return ( (aa->mid) - (bb->mid) );
		}else{
			return ( (aa->min) - (bb->min) );
		}
	}
}
int main(){
	long long n,i,maxOne=0,temp,k=1,maxTwo=0,k1Max=0;
	long long minSide=0,minTemp,a,b;
	scanf("%lld",&n);
	for(i=0;i<n;i++){
		scanf("%lld %lld %lld",&vi[i].min,&vi[i].mid,&vi[i].max);
		if(vi[i].min>vi[i].mid){temp=vi[i].min;vi[i].min=vi[i].mid;vi[i].mid=temp;}
		if(vi[i].min>vi[i].max){temp=vi[i].min;vi[i].min=vi[i].max;vi[i].max=temp;}
		if(vi[i].mid>vi[i].max){temp=vi[i].mid;vi[i].mid=vi[i].max;vi[i].max=temp;}
		vi[i].id=i;
		if(vi[i].min>minSide){
			k1Max=vi[i].id;
			minSide=vi[i].min;
		}
	}
	qsort(vi,n,sizeof(struct Node),cmp);
	for(i=0;i<n-1;i++)
		if( (vi[i+1].mid == vi[i].mid) && (vi[i+1].max == vi[i].max) ){
			a=vi[i+1].min+vi[i].min;b=vi[i].mid;
			minTemp=a<b?a:b;
			if(minTemp > minSide){
				k=2;
				minSide=minTemp;
				maxOne=vi[i].id;maxTwo=vi[i+1].id;
			}
		}
	if(k==1)
		printf("1\n%lld\n",k1Max+1);
	else
		printf("2\n%lld %lld\n",maxOne+1,maxTwo+1);
}

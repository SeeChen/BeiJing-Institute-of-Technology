/*
小军的军训进行到了一半了，今天军训教官搞了一波突然袭击，进行了一个寝的查。
提前了解到查寝消息的小军准备进行一波整理归纳，来使自己的寝室变得更加整洁。具体来说，小军有n件物品，放在n个盒子里，第i个盒子有物品i，小军会进行m次整理，第i次整理，小军会依次在第x个盒子顶拿走物品放入第y个盒子内，直至第x个盒子完全搬空。比如第1个盒子自顶向下有物品1、2，第2个盒子有物品3，将盒子1内的物品搬入盒子2内后结果是： 第1个盒子没有物品，第2个盒子自顶向下是2、1、3
现在，小军告诉你n还有m次操作具体是什么，你能告诉他最后每个盒子内有几个物品，他们具体是什么么？
输入：
一个正整数n代表盒子和物品数，一个正整数m代表整理归纳的次数
接下来m行输入，一行两个正整数x y，代表用上述的方法将盒子x的物品搬到盒子y里
1≤n≤10^5, 1≤m≤10^6, 1≤x,y≤n
输出；
有n行输出
第i行，先输出一个正整数k，表示第i个盒子内的物品数，接下来输出n个数，表示第i个盒子自顶向下的物品标号
注意：
行末无空格，文末有回车。
*/
#include <stdio.h>
#include <stdbool.h>
#define N 100005
#define ll long long int
struct{
	ll num;
	ll top;
	ll bottom;
}item[N];
ll next[N][2]={0};
bool output[N]={false};
int main(){
	ll m,n,uuiu,i,j,x,y;;
	scanf("%lld %lld",&n,&m);
	for(i=1;i<=n;i++){
		item[i].top=item[i].bottom=i;
		item[i].num=1;
	}
	while(m--){
		scanf("%lld %lld",&x,&y);
		if(item[x].num==0)
			continue;
		else{
			if(item[y].num==0){
				item[y].top=item[x].bottom;
				item[y].bottom=item[x].top;
			}
			else{
				if(next[item[x].top][0]==0)
					next[item[x].top][0]=item[y].top;
				else if(next[item[x].top][1]==0)
					next[item[x].top][1]=item[y].top;
				if(next[item[y].top][0]==0)
					next[item[y].top][0]=item[x].top;
				else if(next[item[y].top][1]==0)
					next[item[y].top][1]=item[x].top;
				item[y].top=item[x].bottom;
			}
			item[y].num+=item[x].num;
		    item[x].top=item[x].bottom=item[x].num=0;
		}
	}
	for(i=1;i<=n;i++){
		printf("%lld",item[i].num);
		if(item[i].num!=0){
			printf(" %lld",item[i].top);
			output[item[i].top]=true;
			uuiu=item[i].top;
			for(j=1;j<=item[i].num;j++){
				if(next[uuiu][0]!=0 && !output[next[uuiu][0]]){
					printf(" %lld",next[uuiu][0]);
					uuiu=next[uuiu][0];
					output[uuiu]=true;
				}
				if(next[uuiu][1]!=0 && !output[next[uuiu][1]]){
					printf(" %lld",next[uuiu][1]);
					uuiu=next[uuiu][1];
					output[uuiu]=true;
				}
			}
		}
		printf("\n");
	}
}

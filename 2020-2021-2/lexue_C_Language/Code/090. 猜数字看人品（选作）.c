/*
描述
Tom 和 Jerry 做猜数字的游戏，Tom 想一个数字然后让 Jerry 去猜，数字的范围在 1 到 10 之间。对于 Jerry 每讲的一个数，Tom 都要讲这个数是 too high 或者 too low 或者 right on，直到 right on 结束。为了防止 Tom 作弊，Jerry 把每一次的对话记录下来，现在让你去判断 Tom 有没有作弊。
输入 
游戏可能做很多次，直到 Jerry 猜 0 的时候游戏结束，每一次猜测由一个正整数和一行回答组成。
输出
对每一次游戏如果 Tom 的回答有自相矛盾的地方，就输出 Tom is dishonest，否则输出 Tom may be honest。
*/
#include <stdio.h>
#include <string.h>
int main(){
	int j,min=-1,max=11;
	char t[10];
	while(1){
		scanf("%d",&j);
		getchar();
		if(j==0)
			break;
		gets(t);
		if(strcmp(t,"right on")==0){
			if((j<max&&j>min)){
				printf("Tom may be honest\n");
			}else{
				printf("Tom is dishonest\n");
			}
			min=-1;max=11;
		}else if(strcmp(t,"too high")==0){
			if(j<max)
				max=j;
		}else if(strcmp(t,"too low")==0){
			if(j>min)
				min=j;
		}
	}
}

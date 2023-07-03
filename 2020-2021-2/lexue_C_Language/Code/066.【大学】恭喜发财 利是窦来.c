/*
在中国，过春节时人们有给孩子压岁钱（粤语称为利是）的习俗。
最早的压岁钱出现于汉代，又叫压胜钱，并不在市面上流通，而是铸成钱币形式的玩赏物，有避邪的功能。钱币正面一般铸有“万岁千秋”、“去殃除凶”等吉祥话和龙凤、龟蛇、双鱼等吉祥图案。
据说嘉兴府有一户姓管的人家，夫妻老年得子，十分珍爱。在年三十晚上，为防止“祟”来侵扰一直逗孩子玩，小孩用红纸包了八枚铜钱，包了又拆，拆了又包，睡下以后，包着的八枚铜钱就放在枕边。半夜里，一阵阴风吹过，黑矮的小人正要用他的白手摸孩子的头，突然孩子枕边迸出一道金光，祟尖叫着逃跑了。
于是这件事传扬开来，大家纷纷效仿，在大年夜用红纸包上钱给孩子，祟就不敢再来侵扰了。因而人们把这种钱叫“压祟钱”，“祟”与“岁”发音相同，日久天长，就被称为 “压岁钱”了。
现在有 N 个人，他们都有小孩，春节来了，他们要发压岁钱给朋友的小孩，而他们自己的小孩也会收到压岁钱。为了简单，他们在发压岁钱的时候，使用以下的计算方法，譬如某甲有 100 块，它要给另外三个人的小孩发压岁钱，则每个小孩会分到 100/3 = 33 块，剩余的 1 块就不发了。
给你这 N 个人的信息，以及他们把压岁钱发给了谁的小孩，请你计算他们每个人的小孩收到的压岁钱和他们发出去的压岁钱的差额是多少。
输入
第 1 行:	一个整数 N（2 <= N <= 10)
第 2..N+1 行:	每行是一个人名，每个名字不超过 14 个字符
第 N+2..结束:	N 组按照以下规则组织的数据：
组中的第一行为送出压岁钱的人名。
第二行包括两个数字，第一个是该人有多少钱（0~2000），第二个是它要把钱发给几个人的小孩，用 NGi 表示(0 ≤ NGi ≤ N-1).
如果 NGi 为非零，则下面的 NGi 行会列出接受压岁钱的人的名字。
输出格式
输出为 N 行，每行上是一个人名与它收到和送出的压岁钱之差额，这两项之间有一个空格。这 N 行的顺序应该和输入中第 2~N+1 行的顺序相同。
*/
#include <stdio.h>
#include <string.h>
typedef struct{
	char name[14];
	int value;
}st;
int main(){
	int n,i = 0,m,j,k = 0,money = 0,children = 0;
	st people[10];
	char name[14];
	scanf("%d\n",&n);
	m = n;
	while (n--){
		scanf("%s",people[i].name);
		people[i++].value = 0;
	}
	while (i--){
		scanf("%s\n%d %d",name,&money,&children);
		if (children){
			for (j = 0; ; j++)
				if (strcmp(people[j].name,name) == 0)
					break;
			people[j].value -= (money / children) * children  ;
			j = children;
			while (j--){
				scanf("%s",name);
				for (k = 0; ; k++)
					if (strcmp(people[k].name,name) == 0)
						break;
				people[k].value += money / children;
			}
		}
	}
	for (i = 0; i < m; i++ )
		printf("%s %d\n",people[i].name,people[i].value);
}

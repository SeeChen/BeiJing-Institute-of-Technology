/*
题目描述
小明最近学到了汉诺塔。
但是普通的汉诺塔对小明来说太简单了，于是他想到了一种新玩法。
起初有 n 个柱子，i个柱子上有一个编号为i的圆盘，小明可以合并两个柱子，合并方式如下：
1.选择两个整数x,y;1\le x,y\le n, x\ne y，且x,y号柱子上都有圆盘。
2.设x柱上共有p个圆盘，圆盘编号序列从下至上以此为x_1,x_2,....x_p，y柱上共有q个圆盘，圆盘编号序列从下至上以此为y_1,y_2,....y_q，现在将它们取下，并按照x_1,y_1,x_2,y_2...的顺序放置到x柱上，多余的则按原顺序放到最上面。如：p=2,q=4,则最终序列为x_1,y_1,x_2,y_2,y_3,y_4。
小明将合并n-1次，最终所有圆盘都会到一个柱子上，现在给定每次操作的x和y，你能告诉小明最终圆盘的顺序吗？
输入格式
第一行输入一个正整数n,1\le n\le 100000
接下来n-1行每行两个正整数x,y，x,y满足上述条件。
输出格式
输出一行n个正整数，表示最终的柱子上的圆盘编号从下向上的序列。
*/
#include <bits/stdc++.h>
typedef struct node{
	int data;
	struct node*next;
}Node,*Link;
Link L[100005];
void merge(int x, int y){
	Link p,q,head,tmp;
	head=(Link)malloc(sizeof(Node));
	tmp=head;
	while(L[x]->next!=NULL&&L[y]->next!=NULL){
		p=L[x]->next;	q=L[y]->next;
		L[x]->next=L[x]->next->next;
		L[y]->next=L[y]->next->next;
		p->next=NULL;	q->next=NULL;
		tmp->next=p;	tmp=tmp->next;
		tmp->next=q;	tmp=tmp->next;	
	}
	if(L[x]->next==NULL)
		tmp->next=L[y]->next;
	if(L[y]->next==NULL)
		tmp->next=L[x]->next;
	L[x]=head;
	L[y]->next=NULL;
}
int main (){
	int n,x,y;
	scanf("%d",&n);
	for (int i = 1 ; i<= n ; i++ ){
		Link p=(Link)malloc(sizeof(Node));
		p->data=i;
		p->next=NULL;
		L[i]=(Link)malloc(sizeof(Node));
		L[i]->next=p;
	}
	for (int i = 1; i < n ; i++ ){
		scanf("%d%d",&x,&y);
		merge(x,y);
	}
	Link tmp=L[x];
	while(tmp->next!=NULL){
		tmp=tmp->next;
		printf("%d ",tmp->data);
	}
	printf("\n");
}

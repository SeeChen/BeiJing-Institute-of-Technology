/*
题目内容：
    实现两个由单项链表存储的有序字母数据的合并，如有重复的则只保留一个。
    例如：给定{a, c ,f}, { b, e, g}合并后结果为{a, b, c , e , f , g}。
输入格式：
    两个有序字母数据
输出格式：
    合并后的字母数据
输入样例1：
a b c[回车]
d e f[回车]
输出样例1：
a b c d e f[回车]
输入样例2：
e f g[回车]
e g m[回车]
输出样例2：
e f g m[回车]
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
	char data;
	struct Node *next;
}List,*LinkList;
List* CreateLinkList()
{
	LinkList L = (LinkList)malloc(sizeof(List)),P;
	P = L;
	char c;
	while(1)
	{
		P->next = (LinkList)malloc(sizeof(List));
		P = P->next;
		scanf("%c%c",&(P->data),&c);
		if(c == '\n') break;
	}
	P->next = NULL;
	return L;
}
LinkList MergeLinkList(LinkList L1,LinkList L2)
{
	LinkList P1 = L1->next, P2 = L2->next;
	LinkList L = (LinkList)malloc(sizeof(List)),P;
	P = L;
	while(P1 && P2)
	{
		P->next = (LinkList)malloc(sizeof(List));
		P = P->next;
		if(P1->data > P2->data)
		{
			P->data = P2->data;
			
			
			char c;
			c = P->data;
			while(P2->next)
			{
				if(c == P2->next->data)
					P2 = P2->next;
				else break;
			}
			
			P2 = P2->next;
		}
		else if(P1->data < P2->data){
			P->data = P1->data;
		
			
			char c;
			c = P->data;
			while(P1->next)
			{
				if(c == P1->next->data)
					P1 = P1->next;
				else break;
			}
			
			P1 = P1->next;
		}
		else{
			P->data = P1->data;
			
			
			char c;
			c = P->data;
			while(P1->next)
			{
				if(c == P1->next->data)
					P1 = P1->next;
				else break;
			}
			while(P2->next)
			{
				if(c == P2->next->data)
					P2 = P2->next;
				else break;
			}
			P1 = P1->next;
			P2 = P2->next;
		}
	}
	if(P1)
	{
		P->next = P1;
	}
	else if(P2)
	{
		P->next = P2;
	}
	else P->next = 0;
	return L;
}
void ShowList(LinkList L)
{
	LinkList P = L->next;
	while(P->next)
	{
		printf("%c ",P->data);
		P = P->next;
	}
	printf("%c\n",P->data);
}
int main()	
{
	LinkList L1,L2,L3;
	L1 = CreateLinkList();
	L2 = CreateLinkList();
	L3 = MergeLinkList(L1,L2);
	ShowList(L3);
}

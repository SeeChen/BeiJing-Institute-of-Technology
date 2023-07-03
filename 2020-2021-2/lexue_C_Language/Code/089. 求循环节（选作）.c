/*
输入： N M
输出： 整个循环节
要求：
编写一个尽可能高效的查找循环节起始点的函数： NODE * find( NODE * head, int * n ) 。函数的返回值为循环节的起点（即图中的指针p），n为循环节的长度。
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int data;
	struct node *next;
}NODE;
void outputring(NODE*);
void change(int n,int m,NODE *head){
	NODE **array;
	NODE *p=head;
	array=(NODE**)malloc(sizeof(NODE*)*m);
	for(int k=0;k<m;k++)
		array[k]=NULL;
	while(n!=0){
		if(n*10%m==0){
			p->next=(NODE*)malloc(sizeof(NODE));
			p->next->data=n*10/m;
			p->next->next=NULL;
			n=0;
		}else{
			if(array[n]==NULL){
				array[n]=p->next=(NODE*)malloc(sizeof(NODE));
				p->next->data=n*10/m;
				n=n*10%m;
				p=p->next;
			}else{
				p->next=array[n];
				n=0;
			}
		}
	}
}
NODE *find(NODE *head,int *n){
	NODE *p,*q;
	p=q=head->next;
	while(p!=NULL&&q!=NULL){
		p=p->next;
		q=q->next;
		if(q!=NULL)
			q=q->next;
		if(p==q)
			break;
	}
	if(q==NULL){
		*n=0;
		return NULL;
	}
	int ring=1;
	while(q->next!=p){
		q=q->next;
		ring++;
	}
	int count=0;
	q=p=head->next;
	while(count<ring){
		count++;
		p=p->next;
	}
	while(p!=q){
		p=p->next;
		q=q->next;
	}
	*n=ring;
	return p;
}
void outputring(NODE *pring){
	NODE *p;
	p=pring;
	if(p==NULL)
		printf("NULL");
	else
		do{
			printf("%d",p->data);
			p=p->next;
		}while(p!=pring);
	printf("\n");
	return;
}
int main(){
	int n,m;
	NODE *head,*pring;
	scanf("%d%d",&n,&m);
	head=(NODE*)malloc(sizeof(NODE));
	head->next=NULL;
	head->data=-1;
	change(n,m,head);
	pring=find(head,&n);
	printf("ring=%d\n",n);
	outputring(pring);
}

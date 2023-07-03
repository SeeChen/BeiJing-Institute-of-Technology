/*
编写一个函数，将给定的带有头结点的单向链表的前m个节点移到链尾。
    结构的定义：
struct node{
  int num;
  struct node *next;
}
函数的原型：struct node *monenode( struct node *head,int m )， 其中：参数head 是单向链表的头指针；参数m 是要移动的节点数。函数的返回值是单向链表的头指针。
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct numLink{
	int no;
	struct numLink*next;
}NODE;
NODE *monenode(NODE *head,int m);
void SetLink(NODE *h,int n){
	NODE*p=NULL,*q=NULL;
	int i;
	for(i=0;i<n;i++){
		p=(NODE*)malloc(sizeof(NODE));
		p->no=i+1;
		p->next=NULL;
		if(h->next==NULL){
			h->next=p;
			q=p;
		}else{
			q->next=p;
			q=q->next;
		}
	}
	return;
}
int main(){
	int n,m;
	NODE *head=NULL,*q=NULL;
	scanf("%d%d",&n,&m);
	head=(NODE*)malloc(sizeof(NODE));
	head->no=-1;
	head->next=NULL;
	SetLink(head,n);
	q=monenode(head,m);
	do{
		printf("%d ",q->next->no);
		q=q->next;
	}while(q->next!=NULL);
	printf("\n");
}
NODE *monenode(NODE *head,int m){
	NODE *p,*q;
	int i=0;
	p=q=head;
	while(q->next!=NULL)
		q=q->next;
	while(p->next!=NULL&&i++<m)
		p=p->next;
	q->next=head->next;
	head->next=p->next;
	p->next=NULL;
	return head;
}

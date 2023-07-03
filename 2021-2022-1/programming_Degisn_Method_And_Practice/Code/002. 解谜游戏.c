/*
现在小张给你一些密码锁的状态，请你告诉他最少按几次按钮能够把灯全部熄灭。
Input
第一行两个整数 n,m(1 \leq n,m \leq 16 ) 。
接下来 n 行，每行一个长度为 m 的01字符串，0表示灯初始状态灭，1表示灯初始状态亮。
Output
一行一个整数，表示最少按几次按钮可以把灯全部熄灭。
Notes
第一个样例见题目描述，第二个样例按左上和右下两个按钮。
测试用例保证一定有解。
*/
#include <stdio.h>
#define max 17
int n,m,max_pressBtn,i,j;
int light[max][max],temp[max][max];
void change(int *p){
	if(*p==1)
		*p=0;
	else
		*p=1;
}
void press(int light[][max],int o,int p){
	change(&light[o][p]);
	if(o-1>=0)
		change(&light[o-1][p]);
	if(p-1>=0)
		change(&light[o][p-1]);
	if(o+1<n)
		change(&light[o+1][p]);
	if(p+1<m)
		change(&light[o][p+1]);
}
int calc(){
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			temp[i][j]=light[i][j];
	int x=0;
	for(i=0;i<n-1;i++)
		for(j=0;j<m;j++)
			if(temp[i][j]==1){
				x++;
				press(temp,i+1,j);
			}
	for(i=0;i<m;i++)
		if(temp[n-1][i]==1)
			return -1;
	return x;
}
void pressDown(int x,int count){
	if(x==m){
		int t=calc();
		if(t==-1)
			return;
		if(t+count<max_pressBtn)
			max_pressBtn=t+count;
		return;
	}
	press(light,0,x);
	pressDown(x+1,count+1);
	press(light,0,x);
	pressDown(x+1,count);
}
int main(){
	char c;
	scanf("%d %d\n",&n,&m);
	max_pressBtn=n*m;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			c=getchar();
			light[i][j]=c-'0';
		}
		getchar();
	}
	pressDown(0,0);
	printf("%d\n",max_pressBtn);
}

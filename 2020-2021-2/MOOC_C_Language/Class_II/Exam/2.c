/* 
题目内容：
先输入10个整数，再输入一个ｍ(ｍ＜＝９)，使其前面各数顺序向后移m个位置，最后m个数变成最前面的m个数
输入格式:
1,2,3,4,5,6,7,8,9,10(回车)
3(回车)
输出格式：
8,9,10,1,2,3,4,5,6,7(回车)
输入样例：
1,2,3,4,5,6,7,8,9,10
3
输出样例：
8,9,10,1,2,3,4,5,6,7
*/
#include <stdio.h>
int main(){
	int i,j,a[10],n,b[10];
	for(i=0;i<9;i++)
		scanf("%d,",&a[i]);
	scanf("%d",&a[9]);
	scanf("%d",&n);
	for(i=10-n,j=0;i<10;i++,j++)
		b[j]=a[i];
	for(i=0;i<10-n;i++,j++)
		b[j]=a[i];
	for(i=0;i<9;i++)
		printf("%d,",b[i]);
	printf("%d\n",b[9]);
}
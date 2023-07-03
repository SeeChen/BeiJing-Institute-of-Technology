/* 
题目内容：
    从键盘输入3个同学4门课的成绩，输出指定同学的成绩和平均分。
输入格式：
    输入3个同学4门课的成绩
输出格式：
    输出指定同学的成绩和平均分
输入样例：
89 78 80 76 88 78 75 90 99 92 100 89[回车]
1[回车]
输出样例：
89 78 80 76[回车]
80.75[回车]
*/
#include<stdio.h>
void search(int(*p)[4],int n),everage(int(*p)[4],int n);
int main()
{ int a[3][4],i,j;
   for(i=0;i<3;i++)
    for(j=0;j<4;j++)
     scanf("%d",&a[i][j]);
  int(*p)[4],n;
  scanf("%d",&n);
  p=a;
  search(p,n);
  everage(p,n);
  return 0;
}
void search(int(*p)[4],int n)
{ int i=0;
  for(i=0;i<4;i++)
  if(i!=3)printf("%d ",*(*(p+n-1)+i));
  else printf("%d\n",*(*(p+n-1)+i));
}
void everage(int(*p)[4],int n)
{ int i,sum=0;
  float ev;
  for(i=0;i<4;i++)
  sum+=*(*(p+n-1)+i);
  ev=1.0*sum/4;
  printf("%.2f",ev);
}

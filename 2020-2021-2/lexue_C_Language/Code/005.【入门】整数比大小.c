/*
小明上了小学一年级，老师开始教他认识两个数哪个大，哪个小。计算机要学会这个可以使用 if 语句，也可以使用三目运算 ? 。
输入：两个整型数
输出：两个整型值中的最小值
*/
#include <stdio.h>    
int main(){
  int a,b,min;
  scanf("%d %d",&a,&b);
  min=a>b?b:a;
  printf("min=%d\n",min);
}

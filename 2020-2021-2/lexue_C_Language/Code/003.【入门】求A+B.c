/*
我们已经学了如何使用 scanf 函数中输入整型数据（%d），下面让我们使用 scanf 函数来输入两个整数，然后求它们的和。
输入：
    整数1  整数2
输出：
    整数1+整数2=和
*/
#include <stdio.h>  
int main(){
  int a,b,x;
  scanf("%d\n%d",&a,&b);
  x=a+b;
  printf("%d+%d=%d\n",a,b,x);
}

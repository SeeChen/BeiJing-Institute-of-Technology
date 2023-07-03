/*
背景：
我们在计算机基础中已经学过：字母在计算机中采用ASCII码进行存储。下面要从键盘上输入任意一个字符，然后输出该字符对应的ASCII码。
输入：
    一个字符
输出：
    该字符对应的ASCII码
*/
#include <stdio.h>    
int main(){
  char a;
  scanf("%c",&a);
  printf("The ASCII of character '%c' is %d.\n",a,a);
}

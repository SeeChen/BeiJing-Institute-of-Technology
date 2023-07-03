/*
题目内容：
随着电子设备的广泛运用，密码也渐渐融入每个人的生活。保护好密码，不仅关系到个人隐私，更关系到个人的财产和安全。一个安全的密码，最好由大小写字母、数字或符号组成。包含越多种类的字符，其安全性就越高。同时密码还需要有一定的长度，通常至少要由六个以上的字符组成。
并不是每个人都喜欢这样复杂的密码，很多人在设置密码的时候，喜欢使用自己的名字或者生日，但这是很大的安全隐患。
任务
林晓炜正在设计一个网络交易系统，为了保证用户的密码安全，他需要一个程序，判断用户自己设置的密码是否安全，如果不安全，则给出提示。现在他向你求助，请你帮忙设计一个程序来解决这个问题。
应当按照以下的规则来判断密码是否安全：
如果密码长度小于 6 位，则不安全
如果组成密码的字符只有一类，则不安全
如果组成密码的字符有两类，则为中度安全
如果组成密码的字符有三类或以上，则为安全
通常，可以认为数字、大写字母、小写字母和其它符号为四类不同的字符。
输入格式:
输入的第一行是一个整数 N，表明后面有多少组密码。随后的 N 行输入包括 N 个密码，每个密码的长度均小于 20 个字符。
输出格式：
针对每一个密码判断并输出它是否安全。对于不安全的密码输出 "Not Safe"，对于中度安全的密码输出 "Medium Safe"，对于安全的密码输出 "Safe"
输入样例：
4
1234
abcdef
ABC123
1#c3Gh[回车]
输出样例：
Not Safe
Not Safe
Medium Safe
Safe[回车]
*/ 
#include <stdio.h>
#include <string.h>
void na(char a[]){
  int b=0,c=0,d,i,e=0,f=0,n;
  d=strlen(a);
  if(d<6) printf("Not Safe\n");
  else {
    for(i=0;i<d;i++)
      if(a[i]<58&&a[i]>47) b=1;
    else if(a[i]>64&&a[i]<91) c=1;
    else if(a[i]>96&&a[i]<123) e=1;
    else f=1;
  }
  n=b+c+e+f;
  switch(n){
    case 1:printf("Not Safe\n");break;
    case 2:printf("Medium Safe\n");break;
    case 3:printf("Safe\n");break;
    case 4:printf("Safe\n");break;
  }
}
main(){
  char a[21];
  int j,k;
  scanf("%d\n",&j); 
  for(k=0;k<j;k++){
    gets(a);
    na(a);
  }
}

/*
题目内容：
输入行数和起始字母，输出大写字母等腰三角形。输出的字母是循环的，即递增到字母 'Z' 以后输出 'A' ；递减到字母 'A' 以后输出 'Z'。例如：
输入格式:
4[空格]X[回车]
输出格式：
[空格][空格][空格]X[回车]
[空格][空格]YZY[回车]
[空格]ZABAZ[回车]
ABCDCBA[回车]
输入样例：
4 X 
输出样例：
   X
  YZY
 ZABAZ
ABCDCBA
*/
#include <stdio.h>
int main(){
    int i=0,j=0;
    int n;
    char word;char x;
    scanf("%d %c",&n,&word);
    for(i=1;i<=n;i++){
        for(j=0;j<n-i;j++){
                    printf(" ");
        }
        x=word++;
       if(word>'Z'){word='A';}
       for(j=1;j<=i*2-1;j++){
            printf("%c",x);
            if(j<i){
                 x++;
                if(x>'Z'){x='A';}
            }else{x--;if(x<'A'){x='Z';}}
        }
      printf("\n");
    }
}

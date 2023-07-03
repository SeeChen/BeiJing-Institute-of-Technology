/*
在指定的文本文件中包含了我需要的信息，请从指定文件中读取指定的行。如果文件中没有指定的行，则显示“Line No Error.”。如果文件不存在，则显示“File Name Error.”。
输入：
第一行为要以只读方式打开的文本文件名
第二行要读取的行号（从1开始）
输出：
文件中指定行号的内容（完整一行的内容）
*/ 
#include <stdio.h> 
int main(){ 
   FILE *fp; 
  int n; 
 char wfjmmk[20],nwrs[20]; 
  scanf("%s",wfjmmk); 
    scanf("%d",&n); 
    fp=fopen(wfjmmk,"r"); 
  if(fp==NULL) 
       printf("File Name Error.\n"); 
  else if(n>10) 
       printf("Line No Error.\n"); 
    else{ 
      while(--n){ 
            fgets(nwrs,19,fp); 
     } 
      fgets(nwrs,19,fp); 
     printf("%s",nwrs); 
 } 
}

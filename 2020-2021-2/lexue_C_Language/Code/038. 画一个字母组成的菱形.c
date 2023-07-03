/*
输入顶行字符(大写)和图形的高，输出如图所示图形。
例如顶行字符为 ' A ' ，图形的高为 5。且认为字母是循环的，即Z与A相邻。
              A
            B   B
          C       C
        D           D
       E             E
        D          D
          C      C 
            B  B
             A
*/
#include <stdio.h>  
int main(){  
    char c;int n,i,j;  
    scanf("%[^,],%d",&c,&n);  
    for(i=1;i<=n;i++){  
        for(j=n;j>i;j--){  
            printf(" ");  
        }  
        if(i==1) goto SC_Lee;  
        printf("%c",c);  
        for(j=1;j<(2*i-2);j++){  
            printf(" ");  
        }  
        SC_Lee:printf("%c\n",c);  
        if(c=='Z'){  
            c='A';  
        }  
        else{c++;}  
    }  
    if(c=='A'){  
            c='Z';  
        }  
        else{c--;}  
    for(i=n;i>1;i--){  
        if(c=='A'){  
            c='Z';  
        }  
        else{c--;}  
        for(j=n;j>=i;j--){  
            printf(" ");  
        }  
        if(i==2) goto SC_L;  
        printf("%c",c);  
        for(j=1;j<(2*i-4);j++){  
            printf(" ");  
        }  
        SC_L:printf("%c\n",c);  
    }  
}

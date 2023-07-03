/* 
下面函数的功能是将已经排好序的 N 个字符串合并并输出。
函数combn的功能是采用递归算法将字符串a合并到字符串b，合并后的字符串仍保持升序排列，而且相同的字符在b字符串中只保存一个。
程序中存在着错误，请调试改错。
*/
#include <stdio.h>
void combn(char *a,char *b){
	int j=0,k=0;
	if(a[0]=='\0')
		return;
	while(b[j]!='\0'){
		if(a[0]>b[j])
			j++;
		else
			break;
	}
	if(b[j]=='\0'){
		b[j]=a[0];
		b[j+1]='\0';
	}else if(a[0]<b[j]){
		k=j;
		while(b[k]!='\0')
			k++;
		while(k>=j){
			b[k+1]=b[k];
			k--;
		}
		b[j]=a[0];
	}
	combn(&a[1],b);
	return;
}
int main(){
	int i,n;
	char sa[100],sc[1000]={'\0'};
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		gets(sa);
		combn(sa,sc);
	}
	printf("%s\n",sc);
}

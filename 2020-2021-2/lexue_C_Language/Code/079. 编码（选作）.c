/*
描述 
为了最大程度地节约存储空间，经常需要把信息进行编码。一种很有效的编码方法是用数字来表示一串字符。假设这些字符串都是由不重复的英文小写字母组成的，且每个字符串中的英文字母都是从小到大排列的。
这个编码系统按照如下的方式工作：
字符串是按照长度从小到大的顺序排列的
长度相同的字符串，是按照字典需排列的
则根据这个编码系统，所有的字符串从 a 开始可以编码如下：
a - 1 b - 2 ... z - 26 ab - 27 ... az - 51 bc - 52 ... vwxyz - 83681 ...
那么，请编程计算出一个字符串在这个编码系统下编码后的值是多少。
输入
输入的第一行为 N，表示有 N 组数据。后面的 N 行每行包含一个不超过 10 个字母的字符串。
输出
输出字符串所对应的编码，如果该字符串不能被编码，则输出 0。
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ihvg long long
ihvg combi(int m,int n){
	if(m<n)
		return 0;
	if(m==n||n==0)
		return 1;
	ihvg sum=1;
	for(int i=1,j=m;i<=n;i++,j--)
		sum=sum*j/i;
	return sum;
}
int main(){
	char ddia[100][10]={0};
	int N,i,j,k,len,x,y;
	ihvg ret;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%s",&ddia[i]);
	}
	for(k=0;k<N;k++)
		for(x=0;ddia[k][x]!='\0';x++)
			for(y=x+1;ddia[k][y]!='\0';y++)
				if(ddia[k][x]==ddia[k][y]||ddia[k][x]>ddia[k][y]){
					ddia[k][0]='0';
					break;
				}
	for(k=0;k<N;k++)
		for(x=0;ddia[k][x]!='\0';x++)
			if(ddia[k][x]<'a'||ddia[k][x]>'z'){
				ddia[k][0]='0';
			}
	for(k=0;k<N;k++){
		if(ddia[k][0]=='0')
			printf("0\n");
		else if(strlen(ddia[k])>10)
			printf("0\n");
		else{
			len=strlen(ddia[k]);
			ret=0;
			for(i=1;i<len;i++)
				ret+=combi(26,i);
			for(i='a';i<ddia[k][0];i++)
				ret+=combi('z'-i,len-1);
			for(i=1;i<len;i++)
				for(j=ddia[k][i-1]+1;j<ddia[k][i];j++)
					ret+=combi('z'-j,len-i-1);
			printf("%lld\n",ret+1);
		}
	}
}

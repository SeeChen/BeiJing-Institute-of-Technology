/*\
对于非常大或者非常小的数据，我们通常用科学记数法来表示。例如在科技文献和电脑中经常遇到的 2.3×106 （计算机中的科学记数法表示为：2.3E6），或者 9.18×10-5 （科学记树法表示：9.18E-5）这种类型的数据。
输入：
    用科学记数法表示的数据。即为符合C语言表示的科学记数法表示。
输出：
    该数据的双精度表示
说明： 
    输入数据的精度不高于小数点后50位。
    输入数据时，在实数和幂之间有空格进行分隔，空格个数不定。
    结果保留到小数点后8位，如不足8位用0补足，超过8位则截断，不进行四舍五入的处理。
*/
#include <stdio.h>
#include <string.h>
int main(){
	char e;
	int x,i,j,pL,N=52,len;
	char toCalc1[N-1],toCalc2[N];
	for(i=0;i<=N;i++){
		toCalc1[i]='0';
		toCalc2[i]='0';
	}
	scanf("%s %c %d",&toCalc1,&e,&x);
	len=strlen(toCalc1);
	for(i=0;toCalc1[i]!='\0';i++)
		if(toCalc1[i]=='.'){
			pL=i;
			break;
		}else pL=len;
	for(i=pL;i<=N;i++){
		if(toCalc1[i+1]<'0'||toCalc1[i+1]>'9')
			toCalc1[i]='0';
		else
			toCalc1[i]=toCalc1[i+1];
	}
	if(x>=0){
		pL+=x;
		for(i=0;i<pL;i++)
			toCalc2[i]=toCalc1[i];
		toCalc2[pL]='.';
		for(i=pL+1;toCalc1[i]!='\0';i++)
			toCalc2[i]=toCalc1[i-1];
	}else{
		x+=pL;
		pL=1;
		if(x<=0){
			x=(-1)*x;
			toCalc2[0]='0';
			toCalc2[1]='.';
			for(i=0;i<x;i++)
				toCalc2[i+2]='0';
			for(i=0,j=x;toCalc1[i]!='\0';i++,j++)
				toCalc2[j+2]=toCalc1[i];
		}else{
			for(i=0;i<x;i++)
				toCalc2[i]=toCalc1[i];
			toCalc2[x]='.';
			for(i=pL+1;toCalc1[i]!='\0';i++)
				toCalc2[i]=toCalc1[i-1];
		}
	}
	toCalc2[pL+9]='\0';
	puts(toCalc2);
}

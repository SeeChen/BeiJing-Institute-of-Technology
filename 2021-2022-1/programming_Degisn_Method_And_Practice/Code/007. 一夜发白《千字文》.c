/*
Description
请编写一个程序，从输入中读取一篇中文文章，并统计出该文章中 ASCII 字符以外的重复出现的每一个字重复出现的次数。
文章使用 UTF-8 编码，可能会出现任何可以用 UTF-8 编码表示的字符（不限于中文）。
文章中所有的字符在 UCS-2 能够表示的范围内，即字符的 Unicode 值用两个字节就可以表示。
Input
一篇文章，总字数不限、每行字符数不限。每个字重复出现的次数不超过 60000 空格 次。
Output
按照 Unicode 编码从小到大的顺序，输出文章中 ASCII 左括号 0 雙點 127 右括号 字符以外的每一个重复出现过的字重复出现的次数。每行包含三项内容，首先是重复的字符（以 UTF-8 编码输出），然后是该字符的 Unicode 编码值（十六进制输出，字母均使用小写，长度不足 4 位数的用 0 补齐），最后输出该字符的重复次数。
如果文章中没有出现重复的字，则输出No repeat!。
*/
#include <stdio.h>
struct{
	int iuxm;
	unsigned char unicode[4];
}hash[65536];
int main(){
	unsigned char c1,c2,c3;
	int uni,i,noRe=0;
	for(i=1;i<=65536;i++)
		hash[i].iuxm=0;
	while((scanf("%c",&c1))!=EOF){
		if(c1<128)
			continue;
		else if((c1>>4)==14){
			c2=getchar();
			c3=getchar();
			uni=((c1&0x000f)<<12)+((c2&0x003f)<<6)+(c3&0x003f);
			hash[uni].iuxm+=1;
			hash[uni].unicode[0]=c1;
			hash[uni].unicode[1]=c2;
			hash[uni].unicode[2]=c3;
			hash[uni].unicode[3]='\0';
		}else{
			c2=getchar();
			uni=((c1&0x001f)<<6)+(c2&0x003f);
			hash[uni].iuxm+=1;
			hash[uni].unicode[0]=c1;
			hash[uni].unicode[1]=c2;
			hash[uni].unicode[2]='\0';
		}
	}
	for(i=1;i<=65536;i++){
		if(hash[i].iuxm>1){
			printf("%s 0x%04x %d\n",hash[i].unicode,i,hash[i].iuxm);
			noRe=1;
		}
	}
	if(noRe!=1)
		printf("No repeat!\n");
}

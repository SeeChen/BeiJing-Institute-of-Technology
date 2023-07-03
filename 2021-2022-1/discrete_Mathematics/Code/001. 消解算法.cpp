/*
实现功能：消解算法
输入：合式公式 A 的合取范式
输出：当 A 是可满足时，回答“YES ”；否则回答“NO”。
输入公式的符号说明：
! 非，相当于书面符号中的 “ ¬ ”
& 与，相当于书面符号中的 “ ∧ ”
| 或，相当于书面符号中的 “ ∨ ”
- 蕴含联结词，相当于书面符号中的 “ → ”
+ 等价联结词，相当于书面符号中的 “ ↔ ”
( 前括号
) 后括号
*/
#include <bits/stdc++.h>
#define N 1010

int s[N][30];
int sum0, sum1, sum2;
void store(char str[]){
	memset(s, 0, sizeof(s));
	sum0 = sum1 = -1;
	sum2 = 0;
	int len = strlen(str);
	int i = 0;
	while (i <= len){
		if (str[i] >= 'a' && str[i] <= 'z')
			s[sum2][str[i] - 'a'] = 1;
		else if (str[i] == '&')
			sum2++;
		else if (str[i] == '!')
			s[sum2][str[++i] - 'a'] = 2;
		i++;
	}
}

bool same(int a[], int b[]){
	for (int i = 0; i < 26; i++)
		if (a[i] != b[i])
			return false;
	return true;
}

bool check(int c[]){
	for (int i = 0; i <= sum2; i++)
		if (same(s[i], c))
			return false;
	return true;
}

bool res(int a[], int b[]){
	int single = 0;
	int couple = 0;
	for (int i = 0; i < 26; i++){
		if (!a[i] && !b[i])
			continue;
		if ((a[i] == 1 && b[i] == 2) || (a[i] == 2 && b[i] == 1))
			couple++;
		else
			single++;
	}
	if (couple != 1)
		return true;
	if (!single)
		return false;
	int c[30];
	for (int i = 0; i < 26; i++){
		if ((!a[i] && !b[i]) || (a[i] + b[i] == 3))
			c[i] = 0;
		else if (a[i] == 1 || b[i] == 1)
			c[i] = 1;
		else
			c[i] = 2;
	}
	if (check(c)){
		sum2++;
		for (int i = 0; i < 26; i++)
			s[sum2][i] = c[i];
	}
	return true;
}

int main(){
	char str[N];
	scanf("%s", str);
	store(str);
	do{
		sum0 = sum1;
		sum1 = sum2;
		for (int i = 0; i <= sum0; i++)
			for (int j = sum0 + 1; j <= sum1; j++)
				if (!res(s[i], s[j])){
					printf("NO\n");
					return 0;
				}
		for (int i = sum0 + 1; i <= sum1; i++)
			for (int j = i + 1; j <= sum1; j++)
				if (!res(s[i], s[j])){
					printf("NO\n");
					return 0;
				}
	} while (sum2 > sum1);
	printf("YES\n");
	return 0;
}
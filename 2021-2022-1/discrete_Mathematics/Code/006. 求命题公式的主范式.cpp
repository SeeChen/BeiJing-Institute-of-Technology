/*
实现功能：输入命题公式的合式公式，求出公式的真值表，并输出该公式的主合取范式和主析取范式。
输入：命题公式的合式公式
输出：公式的主析取范式和主析取范式，输出形式为：“ mi ∨ mj ; Mi ∧ Mj” ，极小项和 ∨ 符号之间有一个空格，极大项和 ∧ 符号之间有一个空格；主析取范式和主合取范式之间用“ ; ”隔开，“ ; ”前后各有一个空格。 永真式的主合取范式为 1 ，永假式的主析取范式为 0 。
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

using namespace std;

char in[1000];
int order[30], value[30] = { 0 }, as[10000000] = { 0 }, cnt1 = 0, cnt2 = 0;
int priority(char op){
	switch (op){
	case')':
		return 7;
		break;
	case'!':
		return 6;
		break;
	case'|':
		return 5;
		break;
	case'&':
		return 4;
		break;
	case'-':
		return 3;
		break;
	case'+':
		return 2;
		break;
	case'(':
		return 1;
		break;
	case'#':
		return 0;
		break;
	default:
		return -1;
		break;
	}
}
void RPN(int n){
	int cnt = 0;
	char post[1000] = { 0 };
	stack <char> op;
	op.push('#');
	for (int i = 0; i < n; i++){
		if (priority(in[i]) == -1)
			post[cnt++] = in[i];
		else{
			if (in[i] == ')'){
				while (op.top() != '('){
					post[cnt++] = op.top();
					op.pop();
				}
				op.pop();
			}
			else if(in[i] == '(')
				op.push(in[i]);
			else {
				if (priority(in[i]) > priority(op.top()))
					op.push(in[i]);
				else if (priority(in[i]) == priority(op.top())){
					post[cnt++] = op.top();
					op.pop();
					op.push(in[i]);
				}
				else{
					while (priority(in[i]) <= priority(op.top())){
						post[cnt++] = op.top();
						op.pop();
					}
					op.push(in[i]);
				}
			}
		}
	}
	while (priority(op.top()) != 0){
		post[cnt++] = op.top();
		op.pop();
	}
	for (int i = 0; i < n; i++)
		in[i] = post[i];
}
int e_cnt(){
	int a[30] = { 0 }, ecnt = 0;
	for (int i = 0; i < strlen(in); i++){
		if (priority(in[i]) == -1)
			a[in[i] - 'a']++;
	}
	for (int i = 0; i < 30; i++){
		if (a[i]){
			order[i] = ecnt;
			ecnt++;
		}
	}
	return ecnt;
}
int cal(int a, int b, char c){
	switch (c){
		case'&':
			return a * b;
			break;
		case'|':
			if(a + b)
				return 1;
			else
				return 0;
			break;
		case'+':
			return !((a + b) & 1);
		case'-':
			if (a == 1 && b == 0)
				return 0;
			else
				return 1;
			break;
	}
}
int rpn_cal(){
	stack <int> num;
	for (int i = 0; i < strlen(in); i++){
		if (priority(in[i]) == -1){
			int n = order[in[i] - 'a'];
			num.push(value[n]);
		}
		else if (in[i] == '!'){
			int temp = num.top();
			temp = (temp + 1) & 1;
			num.pop();
			num.push(temp);
		}
		else{
			int b = num.top();
			num.pop();
			int a = num.top();
			num.pop();
			int temp = cal(a, b, in[i]);
			num.push(temp);
		}
	}
	int ans = num.top();
	num.pop();
	return ans;
}
int main(){
	int ecnt, sum;
	cin >> in;
	RPN(strlen(in));
	ecnt = e_cnt();
	sum = pow(2, ecnt);
	for (int i = 0; i < sum; i++){
		int c = i;
		memset(value, 0, sizeof(value));
		for (int j = ecnt-1; j >=0; j--){
			value[j] = c % 2;
			c /= 2;
		}
		int res = rpn_cal();
		if (res == 1){
			as[i] = 1;
			cnt1++;
		} else {
			as[i] = 0;
			cnt2++;
		}
	}
	for (int i = 0; i < sum; i++){
		if (as[i] == 1 && cnt1 > 1){
			printf("m%d ∨ ", i);
			cnt1--;
		}
		else if (as[i] == 1 && cnt1 == 1){
			printf("m%d ; ", i);
		}
	}
	if (cnt1 == 0)
		printf("0 ; ");
	for (int i = 0; i < sum; i++){
		if (as[i] == 0 && cnt2 > 1){
			printf("M%d ∧ ", i);
			cnt2--;
		} else if (as[i] == 0 && cnt2 == 1) {
			printf("M%d\n", i);
		}
	}
	if (cnt2 == 0)
		printf("1\n");
	return 0;
}
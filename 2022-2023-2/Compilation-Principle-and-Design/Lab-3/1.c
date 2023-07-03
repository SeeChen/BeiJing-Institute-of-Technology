int add (int num1, int num2) {
	
	return num1 + num2;
}

int sub (int num1, int num2)  {
	
	return num1 - num2;
}

int mul (int num1, int num2) {
	
	return num1 * num2;
}

int div (int num1, int num2) {
	
	return num1 / num2;
}

int main () {
	
	for (int i = 0; i < 10; i++) {
		
		printf("%d, ", add (i, i));
		printf("%d, ", sub (i, i));
		printf("%d, ", mul (i, i));
		printf("%d\n", div (i, i));
	}
	
	printf("%d\n", add(sub(mul(i, i), div(i, i)), sub(mul(i + 1, i + 1), div(i + 1, i + 1))));
	
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long int fact(int n);

long int fact(int n) {
	int value;

	if (n <= 1)
		return 1;
	else
		value = n * fact(n - 1);
		return value;
}

int main(void) {
	int n,result;
	printf("���ڸ� �Է��ϼ���.");
	scanf("%d", &n);

	result = fact(n);
	printf("%ld\n", result);
	return 0;
}
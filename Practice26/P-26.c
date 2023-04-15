#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//1 1 2 3 5 8 13 21 34 55
int pab(int);

int main(void) {
	int n;
	printf("정수를 입력: ");
	scanf("%d", &n);
	int result = pab(n);
	printf("%ld\n", result);
}

int pab(int n) {
	int value;
	if (n == 0 || n== 1)
		return n;
	else
		value = pab(n-1) + pab(n - 2);
	return value;
}
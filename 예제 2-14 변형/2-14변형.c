#include <stdio.h>

long int sum(int);

void main() {
	int n;
	printf("정수를 입력하세요 : ");
	scanf("%d", &n);
	printf("\n%ld 입니다\n", sum(n));
}

long int sum(int n) {
	int value;
	if (n <= 1)
		return 1;
	else
		return n + sum(n - 1);
}
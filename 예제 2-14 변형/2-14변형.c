#include <stdio.h>

long int sum(int);

void main() {
	int n;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &n);
	printf("\n%ld �Դϴ�\n", sum(n));
}

long int sum(int n) {
	int value;
	if (n <= 1)
		return 1;
	else
		return n + sum(n - 1);
}
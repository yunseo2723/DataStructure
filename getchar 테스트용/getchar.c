#define _CRT_SECURE_NO_WARNINGS
/* ���� ���� */
#include <stdio.h>
int main() {
	int i;
	char c;

	scanf("%d", &i);

	getchar();				//���⿡ �Է��ϸ� i���� i�� ����ǰ� �Ѿ�°ǰ�?

	scanf("%c", &c);		//%s�� ������ char c�� ũ�⸦ �־������ ex) char c[12]

	printf("�Է��� ���� : %c \n", c);
	return 0;
}
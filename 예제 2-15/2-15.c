#include <stdio.h>

void hanoi(int n, char from, char middle, char to);


void hanoi(int n, char from, char middle, char to) {

	if (n == 1) {
		printf("%d������ %c���� %c�� �̵�\n", n, from, to);		//������ n���� �ƴ϶� ���� 1�����? from���� to�� �ٷ� �̵�
	}
	else {
		hanoi(n - 1, from, to, middle);							//���ݿ��� ���� ū ������ ������ �������� from���� middle�� �̵���Ų��.
		printf("%d������ %c���� %c�� �̵�\n", n, from, to);		//���ݿ��� ���� ū ������ from���� to�� �̵���Ų��.
		hanoi(n - 1, middle, from, to);							//�Ʊ� middle�� �ű� ������ to�� �ű��.
	}
}

void main() {
	hanoi(4, 'A', 'B', 'C');
	getchar();
}
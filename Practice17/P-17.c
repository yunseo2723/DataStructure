#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int a, b, c;
	int k[11][6];

	for (int i = 0; i < 3; i++) {
		printf("����, ����, ���� ������ �Է��Ͻÿ�");
		scanf("%d %d %d", &k[i][1], &k[i][2], &k[i][3]);
		k[i][4] = k[i][1] + k[i][2] + k[i][3];
		k[i][5] = k[i][4] / 3;
	}
	printf("�й�\t����\t����\t����\t����\t���\n");
	printf("*************************************************\n");
	for (int j = 0; j < 3; j++) {
		printf("%d\t %d\t %d\t %d\t %d\t %d\n", j+1, k[j][1], k[j][2], k[j][3], k[j][4], k[j][5]);
	}
}
#include <stdio.h>

struct employee {
	char name[20];
	int year;
	int pay;
};
struct employee Lee[]= {
		{"����ȣ",2022,5000},
		{"���ѿ�",2023,1000},
		{"�̻��",2024,3000},
		{"�̻��",2025,2500},
};		//��������

void main() {
	for (int i = 0; i < 4; i++) {
		printf("\n�̸� : %s", Lee[i].name);
		printf("\n�Ի�⵵ : %d��", Lee[i].year);
		printf("\n���� : %d����\n\n", Lee[i].pay);
	}

	getchar();
}

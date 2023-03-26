#include <stdio.h>

struct employee {
	char name[20];
	int year;
	int pay;
};
struct employee Lee[]= {
		{"이진호",2022,5000},
		{"이한영",2023,1000},
		{"이상원",2024,3000},
		{"이상범",2025,2500},
};		//변수선언

void main() {
	for (int i = 0; i < 4; i++) {
		printf("\n이름 : %s", Lee[i].name);
		printf("\n입사년도 : %d년", Lee[i].year);
		printf("\n연봉 : %d만원\n\n", Lee[i].pay);
	}

	getchar();
}

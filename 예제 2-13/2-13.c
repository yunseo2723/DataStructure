#include <stdio.h>

struct employee {
	char name[20];
	int year;
	int pay;
};
struct employee What;
struct employee* Sptr = &What;				//화살표 쓸 땐 Sptr 점 쓸땐 What 써도됨

void main() {
	strcpy(Sptr->name, "이순신");
	Sptr->year = 2023;
	Sptr->pay = 1000;

	printf("\n이름: %s", Sptr->name);
	printf("\n입사년도: %d", Sptr->year);
	printf("\n연봉: %d", Sptr->pay);

	getchar();
}
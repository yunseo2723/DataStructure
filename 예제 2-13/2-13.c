#include <stdio.h>

struct employee {
	char name[20];
	int year;
	int pay;
};
struct employee What;
struct employee* Sptr = &What;				//ȭ��ǥ �� �� Sptr �� ���� What �ᵵ��

void main() {
	strcpy(Sptr->name, "�̼���");
	Sptr->year = 2023;
	Sptr->pay = 1000;

	printf("\n�̸�: %s", Sptr->name);
	printf("\n�Ի�⵵: %d", Sptr->year);
	printf("\n����: %d", Sptr->pay);

	getchar();
}
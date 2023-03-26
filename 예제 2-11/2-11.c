#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	char *ptrArray[2];								//�ʱⰪ, =NULL�� �ǹ�
	char **ptrptr;
	int i;

	ptrArray[0] = "Korea";
	ptrArray[1] = "Seoul";

	ptrptr = ptrArray;																		//ptrptr(��������������) <- ptrArray(������)

	printf("\n ptrArray[0]�� �ּ� (&ptrArray[0])  =%u\n", &ptrArray[0]);			//�ּ� ��½� �տ� &, ptrArray�迭�� �ּ�
	printf("\n ptrArray[0]�� �� (ptrArray[0]) = %u\n", ptrArray[0]);				//ptrArray�迭 ���� Korea�� ���� �ּ�
	printf("\n ptrArray[0]�� ������ (*ptrArray[0]) = %c\n", *ptrArray[0]);			//*�� �Ⱥ��̴ϱ� 0 ���. �տ� *�� ���̸� �ش� ���� ã��, ���� ptrArray[0]�� �� Korea�� ù���� ���
	printf("\n ptrArray[0]�� ���� ���ڿ� (*ptrArray[0]) = %s\n\n\n", *ptrArray);	//*�� �Ⱥ��̴ϱ� �̻��� ���� ���, �ڿ� []���⶧���� ù��° �迭 ���


	printf("\n ptrArray[1]�� �ּ� (&ptrArray[1])  =%u\n", &ptrArray[1]);
	printf("\n ptrArray[1]�� �� (ptrArray[1]) = %u\n", ptrArray[1]);
	printf("\n ptrArray[1]�� ������ (*ptrArray[1]) = %c\n", *ptrArray[1]);
	printf("\n ptrArray[1]�� ���� ���ڿ� (*ptrArray[1]) = %s\n\n\n", *(ptrArray+1));	//ptrArray�� 1�� ���ؼ� 1���迭 Seoul���


	printf("\n ptrptr�� �ּ� (&ptrptr)  =%u\n", &ptrptr);
	printf("\n ptrptr�� �� (ptrptr) = %u\n", ptrptr);
	printf("\n ptrptr�� 1�� ������ (*ptrptr) = %u\n", *ptrptr);
	printf("\n ptrptr�� 2�� ������ (**ptrptr) = %c\n", **ptrptr);					//[]���⶧���� ù��° �迭 ���
	printf("\n ptrptr�� 2�� ���� ���ڿ� (**ptrptr) = %s\n\n\n", *ptrptr);			//[]���⶧���� ù��° �迭 ���

	printf("\n *ptrArray[0] : ");
	for (i = 0; i < 5; i++)
		printf("%c", *(ptrArray[0] + i));
	
	printf("\n **ptrptr : ");
	for (i = 0; i < 5; i++)
		printf("%c", *(*ptrptr + i));

	printf("\n *ptrArray[1] : ");
	for (i = 0; i < 5; i++)
		printf("%c", *(ptrArray[1] + i));

	printf("\n **(ptrptr + 1) : ");
	for (i = 0; i < 5; i++)
		printf("%c", *(*(ptrptr + 1) + i));

	printf("\n");
	getchar();
}
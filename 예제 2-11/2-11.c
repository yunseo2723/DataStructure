#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	char *ptrArray[2];								//초기값, =NULL의 의미
	char **ptrptr;
	int i;

	ptrArray[0] = "Korea";
	ptrArray[1] = "Seoul";

	ptrptr = ptrArray;																		//ptrptr(포인터의포인터) <- ptrArray(포인터)

	printf("\n ptrArray[0]의 주소 (&ptrArray[0])  =%u\n", &ptrArray[0]);			//주소 출력시 앞에 &, ptrArray배열의 주소
	printf("\n ptrArray[0]의 값 (ptrArray[0]) = %u\n", ptrArray[0]);				//ptrArray배열 안의 Korea에 대한 주소
	printf("\n ptrArray[0]의 참조값 (*ptrArray[0]) = %c\n", *ptrArray[0]);			//*을 안붙이니까 0 출력. 앞에 *을 붙이면 해당 값을 찾음, 따라서 ptrArray[0]의 값 Korea의 첫글자 출력
	printf("\n ptrArray[0]의 참조 문자열 (*ptrArray[0]) = %s\n\n\n", *ptrArray);	//*을 안붙이니까 이상한 글자 출력, 뒤에 []없기때문에 첫번째 배열 출력


	printf("\n ptrArray[1]의 주소 (&ptrArray[1])  =%u\n", &ptrArray[1]);
	printf("\n ptrArray[1]의 값 (ptrArray[1]) = %u\n", ptrArray[1]);
	printf("\n ptrArray[1]의 참조값 (*ptrArray[1]) = %c\n", *ptrArray[1]);
	printf("\n ptrArray[1]의 참조 문자열 (*ptrArray[1]) = %s\n\n\n", *(ptrArray+1));	//ptrArray에 1을 더해서 1번배열 Seoul출력


	printf("\n ptrptr의 주소 (&ptrptr)  =%u\n", &ptrptr);
	printf("\n ptrptr의 값 (ptrptr) = %u\n", ptrptr);
	printf("\n ptrptr의 1차 참조값 (*ptrptr) = %u\n", *ptrptr);
	printf("\n ptrptr의 2차 참조값 (**ptrptr) = %c\n", **ptrptr);					//[]없기때문에 첫번째 배열 출력
	printf("\n ptrptr의 2차 참조 문자열 (**ptrptr) = %s\n\n\n", *ptrptr);			//[]없기때문에 첫번째 배열 출력

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
#define _CRT_SECURE_NO_WARNINGS
/* 버퍼 비우기 */
#include <stdio.h>
int main() {
	int i;
	char c;

	scanf("%d", &i);

	getchar();				//여기에 입력하면 i값이 i에 저장되고 넘어가는건가?

	scanf("%c", &c);		//%s를 쓰려면 char c에 크기를 넣어줘야함 ex) char c[12]

	printf("입력한 문자 : %c \n", c);
	return 0;
}
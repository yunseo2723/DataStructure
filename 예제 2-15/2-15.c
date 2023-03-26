#include <stdio.h>

void hanoi(int n, char from, char middle, char to);


void hanoi(int n, char from, char middle, char to) {

	if (n == 1) {
		printf("%d원반을 %c에서 %c로 이동\n", n, from, to);		//원반이 n개가 아니라 만약 1개라면? from에서 to로 바로 이동
	}
	else {
		hanoi(n - 1, from, to, middle);							//원반에서 제일 큰 원반을 제외한 나머지를 from에서 middle로 이동시킨다.
		printf("%d원반을 %c에서 %c로 이동\n", n, from, to);		//원반에서 제일 큰 원반을 from에서 to로 이동시킨다.
		hanoi(n - 1, middle, from, to);							//아까 middle로 옮긴 원반을 to로 옮긴다.
	}
}

void main() {
	hanoi(4, 'A', 'B', 'C');
	getchar();
}
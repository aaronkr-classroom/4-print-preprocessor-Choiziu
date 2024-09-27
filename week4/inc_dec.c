// inc_dec.c
#include <stdio.h>

int main(void) {
	int x = 5;
	int y;
	int post, pre;

	printf("x: %d\n", x);
	y = x; // y에서 지금x의 값을 저장
	printf("y: %d\n", y);

	post = x++;
	printf("x++: %d, ++x: %d\n", post, x);
	printf("x: %d\n", x);

	pre = ++y;
	printf("++y: %d, y++: %d\n", pre, y);
	printf("y: %d\n", y);

	if (x == y) {
		printf("x와 y는 같다\n");
	}
	else {
		printf("x와 y는 같지않다\n");
	}

	if (x = 10) { // = 하나면 항상 true
		printf("x가 10이면\n");
	}
	printf("x: %d, y: %d\n", x, y);

	getch();

	return 0;
}
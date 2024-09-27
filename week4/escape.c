//escape.c
#include <stdio.h>

int main(void) {
	printf("¾È´¨~ Hanbat.ac.kr\n");
	printf("¾È´¨~ Hanbat.ac.kr\rHi~~~\n");

	printf("12345678901234567890\n");
	printf("a\tbc\tdef\tg\n");

	printf("1234567890\b\b\babc\n");
	printf("\aError!");

	return 0;
}
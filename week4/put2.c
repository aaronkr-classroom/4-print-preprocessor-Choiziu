// put2.c
#include <stdio.h>
#define MESSAGE "Hello, world" // �����ݷ� ����

int main(void) {
	// 1.puts()
	puts("Using puts():");
	puts(MESSAGE); //puts()�� ����� �� �ڵ����� �ٹٲ� ����

	// 2.putchar()
	puts("\nUSing putchar():");
	for (int i = 0; MESSAGE[i] != '\0'; i++) {
		putchar(MESSAGE[i]);
	}
	putchar('\n'); //putchat() ����� �� �ٹٲ� ����

	// 3.putc()
	puts("\nUsing putc():");
	for (int i = 0; MESSAGE[i] != '\0'; i++) {
		putc(MESSAGE[i], stdout);
	}
	putc('\n',stdout); //putc() ����� �� �ٹٲ� ����

	return 0;
}
// rps.c (가위바위보)

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // srand() 난수

// 상수 변수 정의
#define ROCK 1
#define PAPER 2
#define SCISSORS 3

// 상수 함수 정의
#define WIN printf("You WIN!\n")
#define LOSE printf("You lose T.T\n")
#define TIE printf("It's a tie ~!\n")

// 함수 원형 선언
void play_game(int user_choice, int comp_choice);
void print_choice(int choice);

int main(void) {
	int user_choice, comp_choice;

	// 랜덤 숫자 생성
	srand(time(0));

	printf("Welcome to PRS!\n");
	printf("Choose your move:\n");
	printf("1 - rock\n");
	printf("2 - Paper\n");
	printf("3 - Scissors\n");

	// 사용자의 선택 받기
	printf("Choice: >>>");;
	scanf_s("%d", &user_choice);

	// AI의 선택 받기
	comp_choice = (rand() % 3) + 1; // (0~2) + 1

	// 선택 출력
	printf("Your choice: ");
	print_choice(user_choice);
	printf("AI choice: ");
	print_choice(comp_choice);

	play_game(user_choice, comp_choice);

	return 0;
}

// 함수 정의
void play_game(int user_choice, int comp_choice) {
	if (user_choice == comp_choice) {
		TIE; // printf("It's a TIE!");
	}
	else if (
		(user_choice == ROCK && comp_choice == SCISSORS) ||
		(user_choice == PAPER && comp_choice == ROCK) ||
		(user_choice == SCISSORS && comp_choice == PAPER)
		) {
		WIN;
	}
	else {
		LOSE;
	}
}

void print_choice(int choice) { // choice == 1
	if (choice == ROCK) {
		printf("ROCK\n");
	}
	else if(choice == PAPER) { // choice == 2
		printf("PAPER\n");
	}
	else if (choice == SCISSORS) { // choice == 3
		printf("SCISSORS\n");
	}
	else {
		printf("(Error: Incorrect choice)\n");
	}
}

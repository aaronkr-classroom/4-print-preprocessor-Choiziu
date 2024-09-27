// calc.c
#include <stdio.h>
//#include <math.h>
#include "calc.h"


// 더하기
double sum(double value1, double value2) {
	return value1 + value2;
}
// 빼기
double sub(double value1, double value2) {
	return value1 - value2;
}
// 곱하기
double mul(double value1, double value2) {
	return value1 * value2;
}
// 나누기
double div(double value1, double value2) {
	if (value2 != 0) return value1 / value2;
	else {
		printf("오류: 0 나누기");
		return 0;
	}
}
// 나머지
int rem(int value1, int value2) {
	if (value2 != 0) return value1 % value2;
	else {
		printf("오류: 0 나누기");
		return 0;
	}
}

// 제곱
double power(double base, double exponent) {
	return pow(base, exponent); // pow() 함수
}

// 제곱근
double squareRoot(double num) {
	if (num >=0)
		return sqrt(num); // math.h에 있는 sqrt 함수
	else {
		printf("오류 : 음수입니다!\n");
		return 1;
	}
}

// 넓이
double areaOfCircle(double radius) {
	return M_PI * radius * radius; // M_PI 정의해야 함
}

// 둘레
double circumferenceOfCircle(double radius) {
	return 2 * M_PI * radius;
}


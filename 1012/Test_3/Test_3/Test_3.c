#include <stdio.h>

int factorial(int);

int main(void) {
	int input;

	printf("팩토리얼 값을 구하고 싶은 정수 입력: ");
	scanf("%d", &input);

	printf("%d! = %d\n", input, factorial(input));

	return 0;
}

int factorial(int i) {
	return (i <= 1) ? 1 : i * factorial(i - 1);
}
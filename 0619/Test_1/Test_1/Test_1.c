/* 20170619 1학기 수행평가 1번 과제 (10점)
 * if문을 이용하여 입력 받은 수가 홀수인지 짝수인지 표시하기 */

#include <stdio.h>

int main(void) {
	int input;

	printf("정수 입력 : ");
	scanf("%d", &input);

	if(input % 2 == 0) {
		printf("입력 받은 수 %d는 짝수입니다.\n", input);
	} else {
		printf("입력 받은 수 %d는 홀수입니다.\n", input);
	}
}
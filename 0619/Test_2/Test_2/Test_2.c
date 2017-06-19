/* 20170619 1학기 수행평가 2번 과제 (10점)
 * switch-case문을 이용하여 입력 받은 점수의 학점을 출력하기 */

#include <stdio.h>

int main(void) {
	int score;
	
	printf("점수 입력 : ");
	scanf("%d", &score);

	switch(score / 10) {
		case 10: case 9:
			printf("입력하신 점수 %d점은 A 학점입니다.\n", score);
			break;
		case 8:
			printf("입력하신 점수 %d점은 B 학점입니다.\n", score);
			break;
		case 7:
			printf("입력하신 점수 %d점은 C 학점입니다.\n", score);
			break;
		case 6:
			printf("입력하신 점수 %d점은 D 학점입니다.\n", score);
			break;
		default:
			printf("입력하신 점수 %d점은 F 학점입니다.\n", score);
			break;
	}

	return 0;
}
/* 20170619 1�б� ������ 2�� ���� (10��)
 * switch-case���� �̿��Ͽ� �Է� ���� ������ ������ ����ϱ� */

#include <stdio.h>

int main(void) {
	int score;
	
	printf("���� �Է� : ");
	scanf("%d", &score);

	switch(score / 10) {
		case 10: case 9:
			printf("�Է��Ͻ� ���� %d���� A �����Դϴ�.\n", score);
			break;
		case 8:
			printf("�Է��Ͻ� ���� %d���� B �����Դϴ�.\n", score);
			break;
		case 7:
			printf("�Է��Ͻ� ���� %d���� C �����Դϴ�.\n", score);
			break;
		case 6:
			printf("�Է��Ͻ� ���� %d���� D �����Դϴ�.\n", score);
			break;
		default:
			printf("�Է��Ͻ� ���� %d���� F �����Դϴ�.\n", score);
			break;
	}

	return 0;
}
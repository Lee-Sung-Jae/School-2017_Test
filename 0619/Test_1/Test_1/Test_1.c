/* 20170619 1�б� ������ 1�� ���� (10��)
 * if���� �̿��Ͽ� �Է� ���� ���� Ȧ������ ¦������ ǥ���ϱ� */

#include <stdio.h>

int main(void) {
	int input;

	printf("���� �Է� : ");
	scanf("%d", &input);

	if(input % 2 == 0) {
		printf("�Է� ���� �� %d�� ¦���Դϴ�.\n", input);
	} else {
		printf("�Է� ���� �� %d�� Ȧ���Դϴ�.\n", input);
	}
}
#include <stdio.h>

int multi(int, int);

int main(void) {
	int i, l;

	for(i = 9; i >= 1; i--) {
		for(l = 9; l >= 1; l--) {
			(l >= 2) ? printf("%d * %d = %d\t", l, i, multi(l, i)) : printf("%d * %d = %d\n", l, i, multi(l, i));
		}
	}

	return 0;
}

int multi(int i, int l) {
	return i * l;
}
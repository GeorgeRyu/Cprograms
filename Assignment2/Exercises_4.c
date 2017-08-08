#include <stdio.h>

int main() {

	int i;
	int f =1;

	for(i = 1; i <= 7; i++) {
		f = f * i;
		printf("%d  %d\n", i, f);
	}

	return 0;

}
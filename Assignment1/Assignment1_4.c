#include <stdio.h>


int main(void) {

	int a = 2;

	for(int i = 1; i <= 10; i++) {

		if(i < a) {
			printf("*");
		}
		a++;
		printf("\n");
	}

	return 0;

}
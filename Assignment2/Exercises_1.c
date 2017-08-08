#include <stdio.h>

int main() {

	int i;
	int count = 0;

	for (i = 1; i <= 10; i++) 

		if( i > 3) {
			count++;
		}

	printf("%d numbers are greater than 3\n", count);

	return 0;
	


}
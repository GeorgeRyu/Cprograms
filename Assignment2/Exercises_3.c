#include <stdio.h>

int main() {

	int d;

	for (d = 1; d <= 10; d++) {
		if(d % 2 == 0) {
			printf("%d is even\n", d);
		} else {
			printf("%d is odd\n", d);
		}
	}

	return 0;

}
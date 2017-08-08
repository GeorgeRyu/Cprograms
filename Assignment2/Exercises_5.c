#include <stdio.h>

int main() {

	int i;
	int fib = 1;
	int pre = 0;
	int t;

	for(i = 1; i <= 10; i++) {
		printf("%d  %d\n", i, fib);
		t = fib;
		fib = fib + pre;
		pre = t;
	}

	return 0;

}
#include <stdio.h>

int main() {

	int i;
	float sum = 0;
	int n = 0;

	for(i = 1; i <= 10; i++) {
		sum = sum + 1*i;
		n++;
	}
	
printf("average is %f\n", sum/n);

return 0;

}
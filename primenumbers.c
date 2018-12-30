#include  <stdio.h>
#include <math.h>

int main() {
	float num;
	printf("choose a number to check if it's a prime number: ");
	scanf("%f", &num);
	int x;
	for(x = 2; x < num ; x++) {
		float check = num/x;
		
		if ((check - (int)check) == 0) {
			printf("\nnão é primo\n");
			x = num + 1;
			return x;
		}
	}
	if (x == num){
		printf("é primo\n");
	}

	return 0;
}
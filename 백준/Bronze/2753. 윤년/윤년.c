#include <stdio.h>
#include <math.h>

int main(void) {

	int n;

	scanf("%d", &n);

	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)) {
		printf("%d", 1);
	}

	else {
		printf("%d", 0);
	}


	return 0;
}
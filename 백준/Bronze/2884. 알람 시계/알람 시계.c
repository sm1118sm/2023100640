#include <stdio.h>

int main(void) {

	int h, m;

	scanf("%d %d", &h, &m);

	if (m - 45 < 0) {
		m = 15 + m;
		h -= 1;

		if (h == -1) {
			h = 23;
			printf("%d %d", h, m);
		}

		else {
			printf("%d %d", h, m);
		}
	}

	else {
		printf("%d %d", h, m - 45);
	}

	

	

	return 0;
}
#include <stdio.h>
#include <string.h>
#include <math.h>



int main(void) {

	int value[20][20];

	int garo = 1;
	int saero = 1;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			scanf("%d", &value[i][j]);
		}
	}

	int result = value[0][0];

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (result < value[i][j]) {
				result = value[i][j];
			}

		}
	}

	printf("%d\n", result);

	for (int i = 0; i < 9; i++)
	{
		int garo = 1;
		for (int j = 0; j < 9; j++)
		{
			if (result != value[i][j]) {
				garo++;
			}
			else {
				printf("%d %d\n", saero, garo);
			}
		}
		saero++;
	}

	

    return 0;
}
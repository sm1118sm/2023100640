#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void) {

	int n;

	scanf("%d", &n);


	for (int i = 0; i < n; i++)
	{
		int k;

		char value[10000];

		scanf("%d %s", &k, &value[0]);

		int len = strlen(value);

		for (int j = 0; j < len; j++)
		{
			for (int s = 0; s < k; s++)
			{
				printf("%c", value[j]);
			}
			
		}
		printf("\n");
		

	}

	


	return 0;
}
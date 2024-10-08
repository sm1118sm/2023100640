#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {

	char word[101];

	scanf("%s", &word);

	int first = 0;
	int last = strlen(word);
	int mid = (first + last) / 2;

	int result = 1;


	for (int i = 0; i < mid; i++)
	{
		if (word[i] != word[last - i - 1]) {
			result = 0;
			break;
		}
	}

	printf("%d", result);

    return 0;
}
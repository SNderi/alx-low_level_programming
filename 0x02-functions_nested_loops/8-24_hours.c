#include <stdio.h>
#include "main.h"

/**
 *jack_bauer - prints every minute of the day
 */

void jack_bauer(void)
{
	int i = 0;

	while (i < 24)
	{
		int j = 0;

		while (j < 59)
		{
			if (i < 10 && j < 10)
				printf("%d%d:%d%d\n", 0, i, 0, j); 
			else if (i < 10 && j >= 10)
				printf("%d%d:%d\n", 0, i, j);
			else if (i >=10 && j < 10)
				printf("%d:%d%d\n", i, 0, j);
			else
				printf("%d:%d\n", i, j);
		}
		j++;
	}
	i++;
}

#include <stdio.h>
#include "main.h"

/**
 *jack_bauer - prints every minute of the day
 */

void jack_bauer(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j < 59)
		{
			if (j < 10)
				printf("%d%d:%d%d\n", 0, i, 0, j); 
			else
				printf("%d%d:%d\n", 0, i, j);
		}
		j++;
	}
	i++;
	int k = 10;

	while (k < 24)
	{
		int l = 0;

		while (l < 59)
		{
			if (l < 10)
				printf("%d:%d%d\n", k, 0, l);
			else
				printf("%d:%d\n", k, l);
		}
		l++;
	}
	k++;
}

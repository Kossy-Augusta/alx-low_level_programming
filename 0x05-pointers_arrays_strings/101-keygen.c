#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid password fro the program 101-crackme
 *
 * Return: Always 0
 */

int main(void)
{
	char psswd[84];
	int index = 0, sum = 0, half1, half2;

	srand(time(0));

	while (sum < 27772)
	{
		psswd[index] = 33 + rand() % 94;
		sum += psswd[index++];
	}

	psswd[index] = '\0';

	if (sum != 27772)
	{
		half1 = (sum - 27772) / 2;
		half2 = (sum - 27772) / 2;

		if ((sum -27772) % 2 != 0)
			half1++;

		for (index = 0; psswd[index]; index++)
		{
			if (psswd[index] >= (33 + half1))
			{
				psswd[index] -= half1;
				break;
			}

			for (index = 0; psswd[index]; index++)
			{
				if (psswd[index] >= (33 + half2))
				{
					psswd[index] -= half2;
					break;
				}
			}
		}
	}

	printf("%s", psswd);
	return (0);
}

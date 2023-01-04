#include <stdio.h>
/**
 * main - sum even fibonacci numbers under 4 million.
 * Return: Nothing.
 */
int main(void)
{
	int i = 0, j = 1, azi = 0;
	int sum = 0;

	while (azi < 4000000)
	{
		azi = i + j;
		i = j;
		j = azi;
		if (azi % 2 == 0)
			sum += azi;
	}
	printf("%i\n", sum);
	return (0);
}

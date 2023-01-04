#include <stdio.h>
/**
 * main - print the first 98 fibonacci numbers
 * starting with 1 and 2
 * Return: Nothing.
 */
int main(void)
{
	unsigned long int i, j, k, m, n, p, azi;

	j = 1;
	k = 2;

	printf("%lu", j);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}
	m = j / 1000000000;
	n = j % 1000000000;
	p = k / 1000000000;
	azi = k % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", p + (azi / 1000000000));
		printf("%lu", azi % 1000000000);
		p = p + m;
		m = p - m;
		azi = azi + n;
		n = azi - n;
	}
	printf("\n");
	return (0);
}

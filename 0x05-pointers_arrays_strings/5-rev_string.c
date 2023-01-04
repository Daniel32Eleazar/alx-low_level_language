#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: String to reverse
 * Return: nothing.
 */
void rev_string(char *s)
{
	int i = 0;
	int azi = 0;
	char nat;

	while (*(s + i) != '\0')
		i += 1;
	i -= 1;
	while (azi < i)
	{
		nat = s[i];
		s[i] = s[azi];
		s[azi] = nat;
		azi++;
		i--;
	}
}

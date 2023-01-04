#include "main.h"
/**
 * _isalpha - a fxn that checks for alphabetic character
 *@c: is the alphabetic letter in both lower and uppercase
 * Return: 1 if c is a letter (lower or uppercase), 0 otherwise
 */
int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
		return (1);
	else
		return (0);
}

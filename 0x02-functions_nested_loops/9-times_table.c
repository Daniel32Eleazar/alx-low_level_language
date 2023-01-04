#include "main.h"
/**
 * times_table -  function that prints the 9 times table, starting with 0
 * row and col are the row and column.
 * roco is the product of the row and col.
 * Return: nothing.
 */
void times_table(void)
{
	int row, col;
	int roco = 0;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			roco = (row * col);
			if  (roco <= 9)
			{
				if (col != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(roco + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((roco / 10) + '0');
				_putchar((roco % 10) + '0');
			}
			if (col != 9)
				if  (col != 9)
					_putchar(',');
		}
		_putchar('\n');
	}
}

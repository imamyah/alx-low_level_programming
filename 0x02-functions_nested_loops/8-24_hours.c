#include"main.c"
/**
 * jack_bauer - prints every minute of the day
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int i,j;

	i++;
	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchat((j / 10) + '0');
			_putchar((j % 10) + '0');
			j++;
		}
		i++;
	}
}

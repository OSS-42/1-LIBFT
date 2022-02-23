#include <unistd.h>

void	rush00(void);

void	rush00(void)
{
	int	x;
	int	y;
	int	i;
	int	j;

	x = 5;
	y = 5;
	i = 0;
	j = 0;
	while (i <= x)
	{
		if (x = 0)
			write(1, "0", 1);
		if (x < 0 || y < 0)
		{
			y = y * -1;
			x = x * -1;
		}
		write(1, "o", 1);
		while (j = 0 || i < x)
		{
			if (i != x)
				write(1, "-", 1);
		i++;
		}
		write(1, "o", 1);
		write(1, "\n", 1);
	j++;
	if (j != 0 || j != y)
	{
		i = 0;
		write(1, "|", 1);
		while (i <= x)
		{
			write(1, " ", 1);
			i++;
		}
		if (i == x)
		{
			write(1, "|", 1);
			write(1, "\n", 1);
		}
	j++;
	}
	write(1, "\n", 1);
	i++;
	}
}

int	main(void)
{
	rush00();
	return (0);
}

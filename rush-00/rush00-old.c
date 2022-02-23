#include <unistd.h>

void	rush00(void);

void	rush00(void)
{
// we declare variables and add 2, 'r' for rows and 'c' for columns
	int	x;
	int	y;
	int	r;
	int	c;

// in this example we make a 5 by 5 rectangle
// x is for columns
// y is for rows
	x = 5;
	y = 5;
// we initialise rows (r) and columns (c)
	c = 0;
	r = 0;
// lets do some checks first
// return "0" if x or y = 0
// change the sign if they are negative
	while (c <= x)
	{
		if (x = 0, y = 0)
			write(1, "0", 1);
		if (x < 0 || y < 0)
		{
			y = y * -1;
			x = x * -1;
		}
// first character will always be 'o'
		write(1, "o", 1);
// and we move to the next column
		c++;
// while we are on the first line and other than first column
// as long as we are not on the last column, write '-' and increment column
		while (c != 0 || c <= x)
		{
			write(1, "-", 1);
			c++;
			if (c = x)
			{
// when reaching last column, write 'o' and switch to next row
			write(1, "o", 1);
			write(1, "\n", 1);
			}
			r++;
			break;
		}
// if the row is not the first nor the last write "|"
		if (r != 0 || r != y)
		{
// we need to reinitialise the column counter to 0	
			c = 0;
// and write the first column character
			write(1, "|", 1);
			c++;
// as long as the column counter does not reach x-1, write ' '
			while (c < x)
			{
				write(1, " ", 1);
				c++;
// when we are at the last column, write the corresponding character
				if (c = x)
				{
					write(1, "|", 1);
					write(1, "\n", 1);
				}
			r++;
			}
		}
// here for the last row I didnt make I would do a recursive to redo the first row
	write(1, "\n", 1);
//	r++;
	}
}

int	main(void)
{
	rush00();
	return (0);
}

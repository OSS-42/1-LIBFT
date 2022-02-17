#include <stdio.h>

void	ft_putnbr(int nb);

int	main(void)
{
    printf("\nMon premier nombre est 42\n");
    ft_putnbr(42);
	printf("\nmon deuxieme est 0\n");
    ft_putnbr(0);
    printf("\nmon troisieme est -2147483648\n");
    ft_putnbr(-2147483648);
    printf("\n");
	return (0);
}

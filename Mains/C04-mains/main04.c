#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	ft_putnbr_base(-42, "01");
	printf("\n");
	ft_putnbr_base(-2147483647, "0123456789");
	printf("\n");
	ft_putnbr_base(-42, "0123456789abcdef");
	printf("\n");
	ft_putnbr_base(-42, "poneyvif");
	printf("\n");
	ft_putnbr_base(0, "01");
	printf("\n");
	ft_putnbr_base(0, "0123456789");
	printf("\n");
	ft_putnbr_base(0, "0123456789abcdef");
	printf("\n");
	ft_putnbr_base(0, "poneyvif");
	printf("\n");
	ft_putnbr_base(42, "01");
	printf("\n");
	ft_putnbr_base(42, "0123456789");
	printf("\n");
	ft_putnbr_base(16, "0123456789abcdef");
	printf("\n");
	ft_putnbr_base(42, "poneyvif");
	printf("\n");
    ft_putnbr_base(42, "");
    printf("\n");
    ft_putnbr_base(42, "0122345678");
    printf("\n");
    return (0);
}

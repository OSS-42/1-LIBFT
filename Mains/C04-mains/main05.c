#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
    int res;
    
	res = ft_atoi_base("-2147483648", "0123456789");
	printf("%d\n", res);
	res = ft_atoi_base("-1E", "0123456789abcdef");
	printf("%d\n", res);
	res = ft_atoi_base("101010", "01");
	printf("%d\n", res);
	res = ft_atoi_base("  1234", "+12");
	printf("%d\n", res);
    res = ft_atoi_base("23", "0123456789");
    printf("%d\n", res);
    res = ft_atoi_base("23e", "0123456789");
    printf("%d\n", res);
    res = ft_atoi_base("", "0123456789");
    printf("%d\n", res);
    res = ft_atoi_base("1234", "0123445678");
    printf("%d\n", res);
    res = ft_atoi_base("1234", "");
    printf("%d\n", res);
    res = ft_atoi_base("100", "0123456789");
    printf("%d\n", res);
    return (0);
}

#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	int res;
	
    
	res = ft_atoi("   ---++--+1234fdfh3432");
    printf("Est-ce que mon resultat est egal a -1234?: %d\n", res);
    res = ft_atoi("   ---+-+-+0fdfh3432");
    printf("ESt-ce que mon resultat est egal a 0?: %d\n", res);
    return (0);
}

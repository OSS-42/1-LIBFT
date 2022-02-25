#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	int res;

	res = ft_strlen("Une bonne grosse poutine");
	printf("%d = 24?\n", res);
    res = ft_strlen("Un chat");
    printf("%d = 7?\n", res);	return (0);
}

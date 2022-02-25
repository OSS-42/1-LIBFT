#include <stdio.h> 

char	*ft_strupcase(char *str);

int	main()
{
	char	str[] = "pHrAse seMI MinuScuLe";
	char	str2[] = "phrase $&#$%[] avec 35645";
	
    printf("---------------------------------------------------------------\n");
    printf("Renvoie la string input en majuscule");
    printf("\ntest2\nInput : %s\nOutput: ", str);
    printf("%s", ft_strupcase(str));
    printf("\ntest2\nInput : %s\nOutput: ", str2);
    printf("%s", ft_strupcase(str2));
    printf("\n***************************************************************");
}

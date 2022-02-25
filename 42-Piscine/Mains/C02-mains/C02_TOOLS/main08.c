#include <stdio.h> 

char	*ft_strlowcase(char *str);

int	main()
{
	char	str[] = "pHrAse seMI MinuScuLe";
	char	str2[] = "PHRASE 7654 #$%^&* FIN";
	
    printf("---------------------------------------------------------------\n");
    printf("Renvoie la string input en minuscule");
    printf("\ntest1\nInput : %s\nOutput: ", str);
    printf("%s", ft_strlowcase(str));
    printf("\ntest2\nInput : %s\nOutput: ", str2);
    printf("%s", ft_strlowcase(str2));
    printf("\n***************************************************************");
}

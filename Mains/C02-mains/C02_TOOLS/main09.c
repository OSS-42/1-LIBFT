#include <stdio.h> 

char *ft_strcapitalize(char *str);

int	main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux;cinquante+et+un";
    char str2[] = "bONs0iR 7LA comPaGN1E";
    char    *p = str;
    
    printf("---------------------------------------------------------------\n");
    printf("Renvoie la string avec la premiere lettre en majuscule et autre en minuscule");
    printf("\nTest1\nInput : %s\nOutput: ", str);
    p = ft_strcapitalize(str);
    printf("%s", str);\
    printf("\nTest2\nInput : %s\nOutput: ", str2);
    p = ft_strcapitalize(str2);
    printf("%s", str2);
    printf("\n***************************************************************");
}

#include <stdio.h> 

int	ft_str_is_uppercase(char *str);

int	main()
{
	char	str[] = "MAJUSCULE";
	char	str2[] = "MiNusCule";
    char	str3[3] = "";
	
    printf("---------------------------------------------------------------\n");
    printf("Renvoie 1 si input alphabetique majuscule ou vide, sinon 0");
	printf("\ntest1\nInput: %s\nRetour attendu : 1\nRetour fonction: %d", str, ft_str_is_uppercase(str));
    printf("\ntest2\nInput: %s\nRetour attendu : 0\nRetour fonction: %d", str2, ft_str_is_uppercase(str2));
    printf("\ntest3\nInput: %s\nRetour attendu : 1\nRetour fonction: %d", str3, ft_str_is_uppercase(str3));
    printf("\n***************************************************************");
}

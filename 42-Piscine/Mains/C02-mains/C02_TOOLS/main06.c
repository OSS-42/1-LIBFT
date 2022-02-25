#include <stdio.h> 

int	ft_str_is_printable(char *str);

int	main()
{
	char	str[] = "Bonjour 123 &~{]<*";
	char	str2[] = "Cecies\n 3tunephrase2";
    char	str3[3] = "";
	
    printf("---------------------------------------------------------------\n");
    printf("Renvoie 1 si juste caractere affichable ou chaine vide, sinon 0");
	printf("\ntest1\nInput: %s\nRetour attendu : 1\nRetour fonction: %d", str, ft_str_is_printable(str));
    printf("\ntest2\nInput: (chaine non printable)\nRetour attendu : 0\nRetour fonction: %d", ft_str_is_printable(str2));
    printf("\ntest3\nInput: %s\nRetour attendu : 1\nRetour fonction: %d", str3, ft_str_is_printable(str3));
    printf("\n***************************************************************");
}

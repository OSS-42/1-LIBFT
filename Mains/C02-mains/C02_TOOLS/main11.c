#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int main()
{
    char	str[] = {'G','O', 1,6,10,16,19,27,31,54,65,127,'P','A','S','S','\0'};
    char    str2[] = "Coucou\ntu vas bien ?";
    
    printf("---------------------------------------------------------------\n");
    printf("Renvoie en ascii hexadecimal les non printables characters");
    printf("\n\ntest1\nRetour attendu :\nGO\\01\\06\\0a\\10\\13\\1b\\1f6A PASS\nRetour fonction:\n");
	ft_putstr_non_printable(str);
    printf("\n\ntest2\nRetour attendu :\nCoucou\\0atu vas bien ?\nRetour fonction:\n");
    ft_putstr_non_printable(str2);
    printf("\n***************************************************************");
}

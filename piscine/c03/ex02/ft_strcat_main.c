#include <stdio.h>

char *ft_strcat(char *dest, char *src); //permet de coller de chaine de caracteres à la suite.

int main(void)
{
    char    src[] = "lemonde";
    char    dest[] = "Bonjour";
    printf("%s\n", ft_strcat(dest, src));
    return 0;
}

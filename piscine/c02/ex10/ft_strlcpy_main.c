#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);//permet de remplcaer une chaine de caractere source dans destination, force a copier un nombre de carater = size
int ft_strlen(char *str);

int main(void)
{
    char    dest[] = "hello";
    char    src[] = "woo";
    printf("%s\n", src);
    printf("%s\n", dest);//print la chaine de caractere enregistree dans dest avant ft_strlcpy
    printf("%d | %s\n", ft_strlcpy(dest, src, 5), dest); //print le nombre de caractere de la chaine envoyée par ft_strlcpy | la chaine de caracter enregistree dans dest
    return (0);
}

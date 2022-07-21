#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);//permet de remplcaer une chaine de caractere source dans destination, force a copier un nombre de carater = size
int ft_strlen(char *str);

int main(void)
{
    char    dest[] = "hello";
    char    src[] = "woo";
    int     n; //valeur pour renseigner size dans la ft_strlcpy
    n = ft_strlen(src); // nombre de caracter dans la chaine (+1 pour le caratere de fin (\0))
    printf("%s\n", dest);//print la chaine de caractere enregistree dans dest avant ft_strlcpy
    printf("%d | %s\n", ft_strlcpy(dest, src, n+1), dest); //print le nombre de caractere de la chaine envoyée par ft_strlcpy | la chaine de caracter enregistree dans dest
    return (0);
}

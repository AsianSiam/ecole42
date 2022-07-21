#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
    char    src[] = "lesgens";
    char    dest[] = "Salut";

    printf("%s\n", ft_strncat(dest, src, 3));
    return 0;
}

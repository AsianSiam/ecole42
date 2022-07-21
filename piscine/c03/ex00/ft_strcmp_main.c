#include <stdio.h>

int ft_strcmp(char *s1, char *s2); // compare des chaine de caracteres s1 et s2

int main(void)
{
    printf("%d\n", ft_strcmp("Bonjour", "Bonjour"));
    printf("%d\n", ft_strcmp("bonjour", "Bon"));
    printf("%d\n", ft_strcmp("zBonjour", "ruojnoB"));
    printf("%d\n", ft_strcmp("Bonjo", "Bonjour"));        
}

#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n); // compare les n premiers bites de deux chaines de caracteres s1 et s2
int main(void)
{
    printf("%d\n", ft_strncmp("Bonjour", "Bonjour", 11));
    printf("%d\n", ft_strncmp("Bonjour", "Bon", 2));
    printf("%d\n", ft_strncmp("zBonjour", "ruojnoB", 7));
    printf("%d\n", ft_strncmp("Bonjo", "Bonjour", 7));        
}

#include <stdio.h>
#include <string.h>

char *ft_strlowercase(char *str);

int main(void)
{
    char str[] = "SalFAWut12";
    printf("%s", ft_strlowercase(str));
    return 0;
}
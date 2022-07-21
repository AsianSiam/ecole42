#include <string.h>
#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
    char str[] = "grgrg";
    printf("%d\n", ft_str_is_lowercase(str));
    return 0;
}


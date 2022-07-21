#include <string.h>
#include <stdio.h>

int ft_str_is_upercase(char *str);

int main(void)
{
    char str[] = "";
    printf("%d\n", ft_str_is_upercase(str));
    char str1[] = "gerger56";
    printf("%d\n", ft_str_is_upercase(str1));
    char str2[] = "AGREGRH";
    printf("%d\n", ft_str_is_upercase(str2));
    return 0;
}
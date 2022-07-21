#include <string.h>
#include <stdio.h>

int ft_str_is_printable(char *str);

int main(void)
{
    char str[] = "";
    printf("%d\n", ft_str_is_printable(str));
    char str1[] = "gerger56";
    printf("%d\n", ft_str_is_printable(str1));
    char str2[] = "\n";
    printf("%d\n", ft_str_is_printable(str2));
    return 0;
}
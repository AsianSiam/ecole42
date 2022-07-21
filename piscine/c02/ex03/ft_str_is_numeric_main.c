#include <string.h>
#include <stdio.h>

int ft_str_is_numeric(char *str);

int main(void)
{
    char str[] = "1245";
    printf("%d\n", ft_str_is_numeric(str));
    
    return 0;
}



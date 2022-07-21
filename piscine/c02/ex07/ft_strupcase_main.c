#include <stdio.h>
#include <string.h>

char *ft_strupcase(char *str);

int main(int argc, char const *argv[])
{
    char str[] = "Salut12";
    printf("%s", ft_strupcase(str));
    return 0;
}

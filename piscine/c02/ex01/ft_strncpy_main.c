#include <stdio.h>
#include <string.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
    char src[] = "hello";
    char dest[] = "salutlemonde";
    printf("%s\n", ft_strncpy(dest, src, 3));
    printf("%s\n", ft_strncpy(dest, src, 6));
    printf("%s\n", ft_strncpy(dest, src, 7));

    char dest1[] = "salutlemonde";
    printf("%s\n", strncpy(dest1, src, 3));
    printf("%s\n", strncpy(dest1, src, 6));
    printf("%s\n", strncpy(dest1, src, 7));

    return 0;
}

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main()
{
	char src[] = "super";
	char dest[] = "okay";
    printf("%s\n", ft_strcpy(dest, src));
    return 0;
}

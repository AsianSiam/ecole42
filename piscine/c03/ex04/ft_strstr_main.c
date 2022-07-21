#include<stdio.h>

char *ft_strstr(char *str, char *to_find); //la fonction cherche une occurence "to_find" dans "str", les bites de fin ne sont pas comparés

int	main(void)
{
	char str[] = "42 1337 Pisco Network 2021 Ecole Miam pisc";
	char find[] = "piscine";
	printf("%s", ft_strstr(str, find));
}
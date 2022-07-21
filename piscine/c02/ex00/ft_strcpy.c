char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0') //tant que la chaine de caractere de src[i] n'est pas fini
	{
		dest[i] = src[i]; // copie src[i] dans dest[i]
		i++; // augmente de 1 la valeur de i pour verrifier le caractere suivant
	}
	dest[i] = '\0';//copie '\0' dans dest[i]
	return (dest);
}
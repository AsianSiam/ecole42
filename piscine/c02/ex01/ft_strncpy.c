char	*ft_strncpy(char *dest, char *src, unsigned int n) // fonction permettant de copier des chaines de caracter de *src vers *dest et limiter le nombre de bites copié à n
{
    unsigned int i; // creation d'un int positif pour référencer les differents char de dest et src

	i = 0; // initialise i à la valeur 0
	while (src[i] != '\0' && i < n) // tant que la chaine de caractere de src[i] n'est pas fini et que i est plus petit que n
	{
		dest[i] = src[i]; // copie src[i] dans dest[i]
		i++; // augmente de 1 la valeur de i pour verrifier le caractere suivant
	}
	while (i < n) //tant que i est plus petit que n (et src[i] == '\0')
	{
		dest[i] = '\0'; //copie '\0' dans dest[i]
		return(dest);
	}	   
	return (dest);
}
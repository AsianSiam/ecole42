char	*ft_strlowcase(char *str) //changes les lettre majuscule en minuscule
{
	int	i;

	i = 0;
	while (str[i] != '\0') //tant que la chaine n'est pas fini
	{
		if (str[i] >= 'A' && str[i] <= 'Z') // si str[i] est une lettre majuscule
			str[i] += 32; //transforme la en minuscule 
		i++; 
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i; //permet de changer la valeur i dans str[i]
	int		i1; //permet de savoir si le caractere précedant est une lettre / un chiffre ou un autre caractere si i1 = 1 -> suit un caractere special, si i1 = 0 -> suit un chiffre ou une lettre

	i = 0;
	i1 = 1; //est initialise a 1 càd suit un caractere qui n'est pas un chiffre ni une lettre
	ft_strlowcase(str);
	while (str[i] != '\0') //tant que la chaine str[i] n'est pas finie
	{
		if (str[i] >= 'a' && str[i] <= 'z') //si str[i] est une lettre minuscule
		{
			if (i1 == 1) //si str[i] suit un caractere qui n'est pas un chiffre ni une lettre
				str[i] -= 32;//modifie str[i] en majuscule
			    i1 = 0;//modifie i1 à zero, indique que le caractere actuel est précédé d'un chiffre ou d'une lettre
		}
		else if (str[i] >= '0' && str[i] <= '9')//si c'est un chiffre, modifie la valeur de i1
			i1 = 0;
		else //si non (n'est ni un chiffre ni une lettre minuscule) modifie la valeur de i1
			i1 = 1;
		i++;
	}
	return (str);
}
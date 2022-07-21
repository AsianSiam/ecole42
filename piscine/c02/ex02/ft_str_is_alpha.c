int ft_str_is_alpha(char *str)
{
    unsigned int i;

	i = 0;
	if (str[i] == '\0') // si la chaine de caractere est vide 
    {
        return(1);
    }
    while (str[i] != '\0') // tant que la chaine de caractere n'est pas finie 
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') // si le caractere est une lettre majuscule ou
            || (str[i] >= 'a' && str[i] <= 'z')) // le caractere est une lettre minuscule
        {
            ++i;    //tant que le caractere de str[i] est une lettre, passe au suivant
        }
        else    // si le caractere de str[i] n'est pas une lettre, renvois 0
        {
            return (0);
        }        
    }
    return(1);
}
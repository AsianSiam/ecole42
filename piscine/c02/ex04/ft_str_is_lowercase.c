int ft_str_is_lowercase(char *str)
{
    unsigned int    i;

    i = 0;
    if (str[i] == '\0')
    {
        return(1); // si la chaine est vide, renvois 1            
    }
    while (str[i] != '\0') //tant que la chaine n'est pas finie
    {
        if (str[i] <= 'z' && str[i] >= 'a') //si str[i] est compris entre a et z
        {
            i++;
        }
        else
        {
            return(0); // renvoie 0 si elle contient d'autres type de caracteres
        }
    }
    return(1); //renvoie 1 si la chaine ne contient que des caracteres alphabetiques minuscules    
}
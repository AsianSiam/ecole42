int ft_str_is_numeric(char *str)
{
    unsigned int i;

    i = 0;
    if (str[i] == '\0') //si str[i] est une chaine vide, renvois 1
    {
        return(1);
    }
    while (str[i] != '\0') //tant que la chaine n'est pas finie
    {
        if (str[i] >= '0' && str[i] <= '9') //si str[i] est entre 0 et 9, +1 à i
        {
            ++i;
        }
        else // si str[i] n'est pas entre 0 et 9, renvois 0
        {
            return(0);
        }        
    }
    return(1); //si la chaine contient que des chiffres, renvois 1
}

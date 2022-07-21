int ft_strlen(char *str) //compte le nombre de caractere dans la chaine str[i]
{
    int i;

    i = 0;
    while (str[i] != '\0') //tant que la chaine str[i] n'est pas finie, ajoutes +1 à i
    {
        i++;
    }
    return(i);    //renvoie le nombre de caractere de la chaine str[i] ->valeur de i
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size) //copie une chaine de caractere et renvois le nombre de caracteres copiés
{
    unsigned int    i;
    unsigned int    x;

    x = ft_strlen(src); //assignation de la valeur de la ft_strlen à x
    i = 0;
    if (size != 0) //si la taille est differente de 0
    {
        while (src[i] != '\0' && i < size -1)//tant que la chaine src[i] n'est pas finie et que i < size-1
        {
            dest[i] = src[i]; //copie la chaine src dans la chaine dest
            i++;
        }
        dest[i] = '\0';
    }    
    return(x);
}

char *ft_strncat(char *dest, char *src, unsigned int nb) //copie nb nombre de caracteres de la chaine src a la suite de dest
{
    unsigned int    i;
    unsigned int    j;

    i = 0;
    while (dest[i] != '\0') //tant que la chaine de caractere des n'est pas finie, augment de 1
    {
        ++i;
    }
    j = 0;
    while (j < nb && src[j] != '\0')//tant que j (caracteres copiés) < que nb et n'est pas finie
    {
        dest[i+j] = src[j]; //copie src a la suite de dest, et passe au suivant
        j++;
    }
    dest[i+j] = '\0';//ajoute un bite de fin a la chaine dest
    return(dest);    //renvoie la chaine de caractere dest
}

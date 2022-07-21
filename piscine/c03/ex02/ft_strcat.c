char *ft_strcat(char *dest, char *src) // copie la chaine de caractere de src vers dest, remplacer le caracter de fin '\0' et en ajoute un bite null à la fin
{
    int i;
    int j;

    i = 0;
    while (dest[i] != '\0') //tant que la chaine de caractere dest n'est pas finie, passe au suivant
    {
        ++i;
    }
    j = 0;
    while (src[j] != '\0') // tant que la chaine de caractere src n'est pas finie
    {
        dest[i] = src[j]; //copie à la suite de dest la valeeur de src, passe au suivant
        ++i;
        ++j;
    }
    dest[i] = '\0';
    return(dest);        
}

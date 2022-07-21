char *ft_strstr(char *str, char *to_find)//la fonction cherche une occurence "to_find" dans "str", les bites de fin ne sont pas comparés
{
    unsigned int    i;
    unsigned int    j;

    i = 0;
    j = 0;
    while (str[i] != '\0')
    {
        while (str[i + j] == to_find[j] && str[i + j] != '\0')
        {
            j++;
        }
        if (to_find[j] == '\0')//verifie si la chaine de caractere "to_find" est finie
        {
            return(str + i);//renvoie au pointeur au debut de l'element "to_find"
        }
        i++;
        j = 0;//permet de revenir au debut de la chaine de caracter "to_find"
    }
    return(0);
}

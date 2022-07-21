int ft_strcmp(char *s1, char *s2)// compare deux chaines de caracteres s1 et s2
{
    unsigned int    i;

    i = 0;
    while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
    {
        i++;
    }
    return (s1[i] - s2[i]);
}

//retourne 0 si s1 et s2 sont egales

//retourne une valeur negative si s1 < s2

//retourne une valeur positive se s1 > s2
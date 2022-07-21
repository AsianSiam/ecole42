int ft_strncmp(char *s1, char *s2, unsigned int n)// compare les n premiers bites de deux chaines de caracteres s1 et s2
{
    unsigned int    i;

    i = 0;            
    while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
    {
        if (s1[i] < s2[i])
        {
            return(-1);
        }
        else if (s1[i] > s2[i])
        {
            return(1);        
        }
        i++;        
    }
    return(0); 
}

//retourne 0 si s1 et s2 sont egales

//retourne une valeur negative si s1 < s2

//retourne une valeur positive se s1 > s2
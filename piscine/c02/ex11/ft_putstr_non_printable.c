#include <unistd.h>

void ft_putchar(char c) //permet d'afficher un caractere
{
    write(1, &c, 1); //ecris le char c 
}

char ft_putchar_is_printable(char c) //permet de savoir si le (char c) caractere est imprimable
{
    if (c >= 32 && c <= 126)
    {
        return(1); //renvois 1 si il est imprimable
    }
    else
    {
        return(0);//renvois 0 si il n'est pas imprimable
    }    
}
void ft_putstr_non_printable(char *str) //permet d'afficher les chaines de caracteres, les non-imprimables sous forme hexadécimale (minuscules) 
{
    unsigned int    i;

    i = 0;    
    while (str[i] != '\0')
    {
        if(ft_putchar_is_printable(str[i]) == 1) //si str[i] est un caractere imprimable via ft_putchar_is_printable     
        {
            ft_putchar(str[i]); //ecrie le caractere via ft_putchar        
        }
        else //si str[i] n'est pas un caractere imprimable
        {
            ft_putchar('\\'); //affiche un "\"
            ft_putchar("0123456789abcdef"[str[i] / 16]); //affiche le premier caractere en hexadecimal
            ft_putchar("0123456789abcdef"[str[i] % 16]);//affiche le second 
        }
        i++;        
    }     
}
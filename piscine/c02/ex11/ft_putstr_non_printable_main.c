#include <unistd.h>

void ft_putchar(char c);
char ft_putchar_is_printable(char c);
void ft_putstr_non_printable(char *str);
int main (void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien"); //test dee l'exercice
	ft_putchar('\n');
	ft_putstr_non_printable("Coucou tu vas bie\t\v\0n"); //test avec d'autres caracteres non imprimable
	ft_putchar('\n');
	ft_putstr_non_printable(""); //test avec une chaine de caractere vide
} 
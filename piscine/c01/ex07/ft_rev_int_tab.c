void	ft_rev_int_tab(int *tab, int size)
{
	int	a;	
	int	temp;

	a = 0;
	while (a < (size / 2))
	{
		temp = tab[a];
		tab [a] = tab [size - 1 - a];
		tab [size - 1 - a] = temp;
		a++;
	}
}
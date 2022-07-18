/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabel <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:31:40 by mbabel            #+#    #+#             */
/*   Updated: 2022/07/18 15:59:44 by mbabel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b != 0)
	{				
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
	else
	{
		printf("ne peut pas etre div par 0\n");
	}
}
/*
int main()
{
	int x;
	int	y;

	x = 15;
	y = 0;
	ft_ultimate_div_mod(&x, &y);
	printf("%d | %d", x, y);
}
*/

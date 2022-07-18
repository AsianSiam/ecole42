/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabel <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:28:51 by mbabel            #+#    #+#             */
/*   Updated: 2022/07/18 15:28:25 by mbabel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*
int main()
{
	int a;
	int	b;
	int	div;
	int	mod;

	a=10;
	b=3;
	ft_div_mod(a, b, &div, &mod);
	printf("%d\n", div);
	printf("%d", mod);
	return 0;
}
*/

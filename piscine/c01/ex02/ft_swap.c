/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabel <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:52:44 by mbabel            #+#    #+#             */
/*   Updated: 2022/07/18 14:27:26 by mbabel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*int	main()
{ 
	int	x;
	int	y;

	x = 2;
	y = 3;
	ft_swap(&x, &y);
	printf("%d \n", x);
	printf("%d", y);
} */
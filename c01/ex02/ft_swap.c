/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-nun <tiuri@student.codam.nl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:35:21 by tvan-nun          #+#    #+#             */
/*   Updated: 2024/08/22 15:54:37 by tvan-nun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	first;
	int	second;

	first = 2;
	second = 4;
	ft_swap(&first, &second);
	printf("%d%d\n", first, second);
	return (0);
}
*/
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

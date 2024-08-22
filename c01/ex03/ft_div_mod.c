/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-nun <tiuri@student.codam.nl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:35:32 by tvan-nun          #+#    #+#             */
/*   Updated: 2024/08/22 18:07:42 by tvan-nun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	total;
	int	divider;
	int	div;
	int	mod;

	printf("Enter total: ");
	scanf("%d", &total);
	printf("Enter divider: ");
	scanf("%d", &divider);
	ft_div_mod(total, divider, &div, &mod);
	printf("answer = %d\n", div);
	printf("remainder = %d\n", mod);
	return (0);
}
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

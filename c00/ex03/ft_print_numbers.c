/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-nun <tiuri@student.codam.nl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:46:21 by tvan-nun          #+#    #+#             */
/*   Updated: 2024/08/22 18:02:09 by tvan-nun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h> 

void	ft_print_numbers(void);

int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
void	ft_print_numbers(void)
{
	int	n;

	n = 48;
	while (n <= 57)
	{
		write(1, &n, 1);
		n++;
	}
}

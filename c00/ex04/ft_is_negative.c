/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-nun <tiuri@student.codam.nl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:34:17 by tvan-nun          #+#    #+#             */
/*   Updated: 2024/08/22 18:02:22 by tvan-nun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h> 

void	ft_is_negative(int n);

int	main(void)
{
	ft_is_negative(-9);
	return (0);
}*/
void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "N", 1);
	}
}

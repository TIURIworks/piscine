/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-nun <tiuri@student.codam.nl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:51:53 by tvan-nun          #+#    #+#             */
/*   Updated: 2024/08/22 18:01:19 by tvan-nun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h> 

void	ft_print_alphabet(void);

int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
void	ft_print_alphabet(void)
{
	char	l;

	l = 97;
	while (l <= 122)
	{
		write(1, &l, 1);
		l++;
	}
}

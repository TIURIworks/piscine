/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-nun <tiuri@student.codam.nl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 20:08:28 by tvan-nun          #+#    #+#             */
/*   Updated: 2024/08/22 18:01:55 by tvan-nun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h> //bibliotheek

void	ft_putchar(char c);//accepteerd geen input

int	main(void)
{
	char	c;

	c = 'B';
	ft_putchar(c);
	return (0);
}
*/
void	ft_putchar(char c)//accepteerd geen input
{
	write(1, &c, 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-nun <tiuri@student.codam.nl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:35:14 by tvan-nun          #+#    #+#             */
/*   Updated: 2024/08/22 18:07:28 by tvan-nun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int main(void)
{
	int	a;
	int	*ptr;
	*ptr = &a;
	int **ptr1;
	**ptr1 = &ptr;
	int ***ptr2;
	***ptr2 = &ptr1;
	int ****ptr3;
	****ptr3 = &ptr2;
	int *****ptr4;
	*****ptr4 = &ptr3;
	int ******ptr5;
	******ptr5 = &ptr4;
	int *******ptr6;
	*******ptr6 = &ptr5;
	int ********ptr7;
	********ptr7 = &ptr6;
	int *********nbr;
	*********nbr = &ptr7;

	ft_ultimate_ft(nbr);
	printf("%d", a);
}
*/
void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

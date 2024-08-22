/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush01.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jtjitra <jtjitra@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/17 21:26:28 by jtjitra       #+#    #+#                 */
/*   Updated: 2024/08/18 16:24:06 by jtjitra       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(int x, char first, char middle, char last)
{
	int	row;

	row = 1;
	while (row <= x)
	{
		if (row == 1)
			ft_putchar(first);
		else if (row == x)
			ft_putchar(last);
		else
			ft_putchar(middle);
		row++;
	}
	ft_putchar('\n');
}

void	rush01(int x, int y)
{
	int	col;

	col = 1;
	if (x > 0 && y > 0)
	{
		while (col <= y)
		{
			if (col == 1)
				print(x, '/', '*', '\\');
			else if (col == y)
				print(x, '\\', '*', '/');
			else
				print(x, '*', ' ', '*');
			col++;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 10:58:28 by djin              #+#    #+#             */
/*   Updated: 2023/03/26 14:31:58 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(void)
{
	int	y;
	int	x;
	int	i;
	int	j;
	char	a = 111;
	char	b = 45;
	char	c = 124;

	x = 5;
	y = 5;
	i = 1;
	j = 1;
	while (i <= y)
	{	
		j = 1;
		while (j <= x)
		{					
			if (i == 1 || j == 1 || i == y || j == x)
			{
				if ((i == 1 || i == y) && (j == 1 || j == x))
				{
					ft_putchar(a);
				}
				else if ((i > 1 || i < y) && (j == 1 || j == x))
				{
					ft_putchar(c);
				}
				else
				{
					ft_putchar(b);
				}
			}
			else
			{
				ft_putchar(' ');
			}
		j++;
		}
		ft_putchar('\n');
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codegrunt <codegrunt@proton.me>	    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:26:16 by codegrunt	       #+#    #+#             */
/*   Updated: 2024/09/11 15:19:23 by codegrunt        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			if (i < j)
			{
				if (i > 0 || j > 1)
				{
					write(1, ", ", 2);
				}
				ft_putchar(i / 10 + '0');
				ft_putchar(i % 10 + '0');
				ft_putchar(' ');
				ft_putchar(j / 10 + '0');
				ft_putchar(j % 10 + '0');
			}
			j++;
		}
		i++;
	}
}

// int	main(void)
// {
// 	ft_print_comb2 ();
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codegrunt <codegrunt@proton.me>	    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:46:12 by codegrunt	       #+#    #+#             */
/*   Updated: 2024/09/11 12:59:43 by codegrunt        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb(void)
{
	int n;
	int a;
	int b;
	int c;

	n = 12;
	while (n <= 789)
	{
		a = n / 100;
		b = (n % 100) / 10;
		c = n % 10;
		if (a != b && b != c && c != a && a < b && b < c)
		{
			if (n > 12)
			{
				write(1, ", ", 2);
			}
			ft_putchar('0' + a);
			ft_putchar('0' + b);
			ft_putchar('0' + c);
		}
		n++;
	}
}

// int	main(void)
// {
// 	ft_print_comb ();
// }
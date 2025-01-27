/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codegrunt <codegrunt@proton.me>	    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:20:18 by codegrunt	       #+#    #+#             */
/*   Updated: 2024/10/01 14:56:31 by codegrunt	      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

int ft_is_prime(int nb)
{
	int i;

	i = 2;

	if (nb <= 1)
	{
		return (0);
	}
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int ft_find_next_prime(int nb)
{
	int i;

	if (nb <= 1)
	{
		return (2);
	}
	i = nb;
	while (1)
	{
		if (ft_is_prime(i))
		{
			return (i);
		}
		i++;
	}
}

// int	main(int argc, char **argv)
// {
// 	(void) argc;
// 	printf("%d", ft_find_next_prime(atoi(argv[1])));
// }

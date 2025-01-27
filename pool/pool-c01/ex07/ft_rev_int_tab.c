/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codegrunt <codegrunt@proton.me>	    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 20:54:17 by codegrunt	       #+#    #+#             */
/*   Updated: 2024/09/11 21:04:32 by codegrunt        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap(int *p, int *p1)
{
	int tmp;

	tmp = *p;
	*p = *p1;
	*p1 = tmp;
}

void ft_rev_int_tab(int *tab, int size)
{
	int swaps;
	int i;

	i = 0;
	swaps = size / 2;
	// size/2 is the "tricky" thing to grasp here
	while (swaps--)
	{
		ft_swap(&(*(tab + i++)), &(tab[--size]));
	}
}

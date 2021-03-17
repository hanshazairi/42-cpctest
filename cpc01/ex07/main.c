/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 01:03:54 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/03/15 01:10:01 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int		main(void)
{
	int		tab[10];
	int		i;
	int		size;

	i = 0;
	size = 10;
	while (i < size)
	{
		tab[i] = i;
		++i;
	}
	ft_rev_int_tab(tab, size);
	while (i--)
		printf("%d", tab[i]);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 19:23:15 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/03/18 19:27:31 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_find_next_prime(int nb);

int		main(void)
{
	int		nb[8];
	int		i;

	nb[0] = -2147483648;
	nb[1] = -1;
	nb[2] = 0;
	nb[3] = 1;
	nb[4] = 2;
	nb[5] = 14;
	nb[6] = 2147483630;
	nb[7] = 2147483647;
	i = 0;
	while (i < 8)
		printf("%d", ft_find_next_prime(nb[i++]));
	return (0);
}

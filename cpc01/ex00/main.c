/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 00:08:13 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/03/15 00:35:25 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int		main(void)
{
	int		*nbr;
	int		tmp;

	tmp = 21;
	nbr = &tmp;
	ft_ft(nbr);
	printf("%d", *nbr);
	return (0);
}

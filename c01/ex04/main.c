/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 00:53:22 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/03/15 00:54:46 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int		a;
	int		b;

	a = -2147483648;
	b = 2147483647;
	ft_ultimate_div_mod(&a, &b);
	printf("%d%d", a, b);
	return (0);
}

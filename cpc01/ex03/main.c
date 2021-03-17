/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 00:46:30 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/03/15 00:52:56 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int		a;
	int		b;
	int		div;
	int		mod;

	a = -2147483648;
	b = 2147483647;
	div = 42;
	mod = 21;
	ft_div_mod(a, b, &div, &mod);
	printf("%d%d%d%d", a, b, div, mod);
	return (0);
}

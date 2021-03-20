/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 01:40:30 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/03/21 01:45:58 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c)
{
	(void)c;
	printf("ft_putchar\n");
}

void	ft_swap(int *a, int *b)
{
	(void)a;
	(void)b;
	printf("ft_swap\n");
}

void	ft_putstr(char *str)
{
	(void)str;
	printf("ft_putstr\n");
}

int		ft_strlen(char *str)
{
	(void)str;
	printf("ft_strlen\n");
	return (0);
}

int		ft_strcmp(char *s1, char *s2)
{
	(void)s1;
	(void)s2;
	printf("ft_strcmp");
	return (0);
}

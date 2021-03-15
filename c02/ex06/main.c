/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 12:52:59 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/03/15 17:15:51 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_str_is_printable(char *str);

int		main(void)
{
	int		i;
	char	*str[3];
	char	c;

	i = 0;
	str[0] = malloc(sizeof(char) * ('~' - ' ' + 2));
	str[1] = malloc(sizeof(str[0]) + 2);
	c = ' ' - 1;
	while (++c <= '~')
		strcat(str[0], &c);
	strcat(str[1], "\x1F");
	strcat(str[1], str[0]);
	strcat(str[1], "\x7f");
	str[2] = "";
	while (i < 3)
		printf("%d", ft_str_is_printable(str[i++]));
	return (0);
}

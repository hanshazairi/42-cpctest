/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:43:18 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/03/16 20:50:04 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str);

int		main(void)
{
	int		i;
	char	*str[5];

	i = 0;
	str[0] = "Hello World!";
	str[1] = "Bye People!";
	str[2] = "\x00\x01\x02\x03\x04\xFF\xFE\xFD\xFC\xFB";
	str[3] = "\x48\x65\x6C\x6C\x6F";
	str[4] = "";
	while (i < 5)
		printf("%d", ft_strlen(str[i++]));
	return (0);
}

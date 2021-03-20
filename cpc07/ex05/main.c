/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 18:30:19 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/03/20 22:17:43 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split(char *str, char *charset);

int		main(void)
{
	int		i;
	char	**tmp;
	char	*str;
	char	*charset[4];

	i = 0;
	str = "Hello, World! Indeed, it is a beautiful day!";
	charset[0] = " ";
	charset[1] = ",";
	charset[2] = ", ";
	charset[3] = "";
	while (i < 4)
	{
		tmp = ft_split(str, charset[i++]);
		while (*tmp)
			printf("%s", *tmp++);
	}
	return (0);
}

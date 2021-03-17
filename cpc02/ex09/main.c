/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 12:52:59 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/03/15 16:01:13 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char	*str1;
	char	str2[62];

	str1 = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	strcpy(str2, str1);
	printf("%s", ft_strcapitalize(str2));
	return (0);
}

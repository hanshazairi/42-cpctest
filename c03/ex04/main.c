/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 00:11:26 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/03/16 00:27:22 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char	*str;
	char	to_find[7];
	char	tmp[13];

	str = "Hello World!";
	strcpy(to_find, "World");
	strcpy(tmp, ft_strstr(str, to_find));
	printf("%s%s%s", str, to_find, tmp);
	strcat(to_find, ".");
	printf("%s%s", str, to_find);
	strcpy(to_find, "");
	strcpy(tmp, ft_strstr(str, to_find));
	printf("%s%s%s", str, to_find, tmp);
	return (0);
}

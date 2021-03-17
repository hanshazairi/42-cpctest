/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 23:48:11 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/03/16 00:09:39 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char	src[13];
	char	dst[24];

	strcpy(src, "Hello World!");
	strcpy(dst, "Bye People!");
	ft_strncat(dst, src, 6);
	printf("%s%s", src, dst);
	strlcpy(src, dst, 4);
	ft_strncat(dst, src, 6);
	printf("%s%s", src, dst);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 23:48:11 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/03/15 23:58:43 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char	src[13];
	char	dst[24];

	strcpy(src, "Hello World!");
	strcpy(dst, "Bye People!");
	ft_strcat(dst, src);
	printf("%s%s", src, dst);
	return (0);
}

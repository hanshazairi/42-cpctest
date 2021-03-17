/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 18:58:19 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/03/15 19:14:59 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char	src[13];
	char	dst[12];

	strcpy(src, "Hello World!");
	strcpy(dst, "Bye People!");
	ft_strncpy(dst, src, 3);
	printf("%s%s", src, dst);
	strcpy(src, "Hey");
	ft_strncpy(dst, src, 4);
	printf("%s%s", src, dst);
	return (0);
}

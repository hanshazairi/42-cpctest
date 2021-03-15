/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 18:42:54 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/03/15 19:17:26 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char	*src;
	char	dst[12];

	src = "Hello";
	strcpy(dst, "Bye People!");
	ft_strcpy(dst, src);
	printf("%s%s", src, dst);
	return (0);
}

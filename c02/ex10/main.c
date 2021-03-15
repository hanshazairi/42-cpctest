/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 18:22:51 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/03/16 00:51:45 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int				main(void)
{
	int		dst_len;
	char	*src;
	char	dst[13];

	src = "Hello World!";
	strcpy(dst, "Bye People!");
	dst_len = ft_strlcpy(dst, src, 13);
	printf("%s%s%d", src, dst, dst_len);
	strcpy(dst, "Bye People!");
	dst_len = ft_strlcpy(dst, src, 6);
	printf("%s%s%d", src, dst, dst_len);
	return (0);
}

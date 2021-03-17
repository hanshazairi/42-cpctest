/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 00:30:15 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/03/16 00:58:19 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int				main(void)
{
	int		dst_len;
	char	*src;
	char	dst[24];

	src = "Hello World!";
	strcpy(dst, "Bye People!");
	dst_len = ft_strlcat(dst, src, 24);
	printf("%s%s%d", src, dst, dst_len);
	strcpy(dst, "Bye People!");
	dst_len = ft_strlcat(dst, src, 17);
	printf("%s%s%d", src, dst, dst_len);
	return (0);
}

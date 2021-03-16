/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:51:01 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/03/16 20:54:31 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

int		main(void)
{
	ft_putstr("Hello World!");
	ft_putstr("Bye People!");
	ft_putstr("\x00\x01\x02\x03\x04\xFF\xFE\xFD\xFC\xFB");
	ft_putstr("\x48\x65\x6C\x6C\x6F");
	ft_putstr("");
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:54:46 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/03/16 20:56:06 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);

int		main(void)
{
	ft_putnbr(-2147483648);
	ft_putnbr(-1);
	ft_putnbr(0);
	ft_putnbr(1);
	ft_putnbr(2147483647);
	return (0);
}
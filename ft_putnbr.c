/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 10:32:00 by msimoes           #+#    #+#             */
/*   Updated: 2025/05/01 11:06:51 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(long n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		i += ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		i += ft_putnbr(n / 10);
		i += ft_putnbr(n % 10);
	}
	else
		i += ft_putchar(n + '0');
	return (i);
}
/*
int main()
{
	printf("\n%d", ft_putnbr(147483648));
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsputnbrc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 10:32:00 by msimoes           #+#    #+#             */
/*   Updated: 2025/04/29 14:49:12 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int ft_unscount(unsigned int n)
{
	int i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	ft_unsputnbr(unsigned int n)
{
	int i;

	i = ft_unscount(n);
	if (n >= 10)
	{
		ft_unsputnbr(n / 10);
		ft_unsputnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
	return (i);
}

/*
int main()
{
	int i = -123456789;
	printf("%u \n", i);
	ft_unsputnbr(i);
}
*/

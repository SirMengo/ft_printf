/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexputnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:28:17 by msimoes           #+#    #+#             */
/*   Updated: 2025/04/29 14:59:48 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"


int ft_hexputnbr(int n)
{
	int i;

	i = ft_unscount(n);
	if (n >= 10)
	{
		ft_hexputnbr(n / 16);
		ft_hexputnbr(n % 16);
	}
	else
		ft_putchar(n + '0');
	return (i);
}

int main()
{
	int i = 147483648;
	printf("%x", i);
}
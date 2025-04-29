/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexputnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:28:17 by msimoes           #+#    #+#             */
/*   Updated: 2025/04/29 18:00:05 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_hexputnbr(unsigned int	n, unsigned char	c)
{
	const char	*hexup = "0123456789ABCDEF";
	const char 	*hexlo = "0123456789abcdef";
	int			i;	
	
	i = 0;
	if (n > 15)
		i += ft_hexputnbr(n / 16, c);
	if(c == 'X')
		i += ft_putchar(hexup[n % 16]);
	else if (c == 'x')
		i += ft_putchar(hexlo[n % 16]);
	return (i);
}
 /*
int main()
{
	int i = 25567;
	char c = 'X';
	ft_hexputnbr(i, c);
	printf("\n");
	printf("\n%d", ft_hexputnbr(i, c));
}
*/
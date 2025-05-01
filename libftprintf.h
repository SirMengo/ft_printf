/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:30:07 by msimoes           #+#    #+#             */
/*   Updated: 2025/05/01 12:32:28 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(long n);
int	ft_unsputuns(unsigned int n);
int ft_puthex(unsigned int n, unsigned char c);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 19:23:07 by nevaspid          #+#    #+#             */
/*   Updated: 2023/03/06 23:46:04 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	select_format(va_list args, const char *str, int i)
{
	int	len;

	len = 0;
	if (str[i] == '%')
		len += ft_putchar_pf('%');
	else if (str[i] == 'c')
		len += ft_putchar_pf(va_arg(args, int));
	else if (str[i] == 's')
		len += ft_printf_str(va_arg(args, char *));
	else if (str[i] == 'u')
		len += ft_printf_diu((long long)va_arg(args, unsigned int));
	else if (str[i] == 'x')
		len += ft_printf_xmin(va_arg(args, unsigned long int));
	else if (str[i] == 'X')
		len += ft_printf_x(va_arg(args, unsigned int));
	else if (str[i] == 'p')
	{
		len += ft_printf_str("0x");
		if (len >= 0)
			len += ft_printf_p(va_arg(args, unsigned long int));
	}
	else if (str[i] == 'd' || str[i] == 'i')
		len += ft_printf_diu(va_arg(args, int));
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, str);
	if (!str)
		return (0);
	while (str[i] && count >= 0)
	{
		if (str[i] == '%' && str[i + 1])
			count += select_format(args, str, ++i);
		else
			count += ft_putchar_pf(str[i]);
		i++;
	}
	va_end(args);
	if (count < 0)
		return (-1);
	return (count);
}

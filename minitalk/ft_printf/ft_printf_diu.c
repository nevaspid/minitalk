/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_diu.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:00:26 by gloms             #+#    #+#             */
/*   Updated: 2023/03/03 18:57:05 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len_nbr(long long nbr)
{
	int	count;

	count = 0;
	if (nbr <= 0)
	{
		count += 1;
		if (nbr < 0)
			nbr *= -1;
	}
	while (nbr / 10)
	{
		nbr /= 10;
		count++;
	}
	if (nbr >= 1 && nbr <= 9)
		count += 1;
	return (count);
}

static int	called_ft_printf_di(long long nbr)
{
	if (nbr < 0)
	{
		if (ft_putchar_pf('-') < 0)
			return (-2147483648);
		nbr *= -1;
	}
	if (nbr >= 10)
	{
		if (ft_printf_diu(nbr / 10) < 0)
			return (-2147483648);
		if (ft_printf_diu(nbr % 10) < 0)
			return (-2147483648);
	}
	if (nbr >= 0 && nbr <= 9)
	{
		if (ft_putchar_pf(nbr + 48) < 0)
			return (-2147483648);
	}
	return (1);
}

int	ft_printf_diu(long long nbr)
{
	if (called_ft_printf_di(nbr) < 0)
		return (-2147483648);
	return (len_nbr(nbr));
}

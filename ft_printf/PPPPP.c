/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PPPPP.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 20:45:10 by gloms             #+#    #+#             */
/*   Updated: 2023/03/06 23:48:05 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	called_ft_printf_p(unsigned long int n, int *ret)
{
	if (n < 16)
	{
		if (ft_putchar_pf("0123456789abcdef"[n]) < 0)
			return (-2147483648);
		*ret += 1;
	}
	else
	{
		if (called_ft_printf_p(n / 16, ret) < 0)
			return (-2147483648);
		if (called_ft_printf_p(n % 16, ret) < 0)
			return (-2147483648);
	}
	return (0);
}

int	ft_printf_p(unsigned long int nbr)
{
	int	ret;

	ret = 0;
	if (called_ft_printf_p(nbr, &ret) < 0)
		return (-2147483648);
	return (ret);
}

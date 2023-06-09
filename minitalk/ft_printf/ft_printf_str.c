/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:01:15 by nevaspid          #+#    #+#             */
/*   Updated: 2023/03/03 18:56:40 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_str(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		if (ft_printf_str("(null)") < 0)
			return (-2147483648);
		return (6);
	}
	while (str[i])
	{
		if (ft_putchar_pf(str[i++]) < 0)
			return (-2147483648);
	}
	return (i);
}

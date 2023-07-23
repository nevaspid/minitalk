/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 19:26:27 by nevaspid          #+#    #+#             */
/*   Updated: 2023/03/04 02:25:53 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *args, ...);
int	ft_putchar_pf(int c);
int	ft_printf_diu(long long nbr);
int	ft_printf_str(char *str);
int	ft_printf_x(unsigned int nbr);
int	ft_printf_xmin(unsigned int nbr);
int	ft_printf_p(unsigned long int nbr);

#endif
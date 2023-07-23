/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:28:29 by gloms             #+#    #+#             */
/*   Updated: 2023/07/22 22:59:36 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "ft_printf/ft_printf.h"
# include <unistd.h>
# include <signal.h>
# include <stdlib.h>

int		ft_atoi(char *str);
void	char_to_binary(int pid, unsigned char c);
void	binary_to_char(int signum, siginfo_t *info, void *context);

#endif
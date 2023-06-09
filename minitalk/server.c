/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:21:15 by gloms             #+#    #+#             */
/*   Updated: 2023/06/07 18:44:27 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/ft_printf.h"
#include "utils.c"
#include <unistd.h>

int main(void)
{
	pid_t 	getpid();

	ft_printf("PID : %d\n", getpid());
}

//gestion des conversions char to binaire 
// char binary_to_char(int str)
// {

// }
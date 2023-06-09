/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:21:19 by gloms             #+#    #+#             */
/*   Updated: 2023/06/07 20:34:50 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/ft_printf.h"
#include "utils.c"
#include <unistd.h>

int	main(int ac, char **av)
{
	int pid;

	(void)ac;
	//if ac == 3, sinn 'ca degage
	pid = ft_atoi(av[1]);
	char_to_binary(av[2]);
	return 0;
}

int char_to_binary(char *str)
{
	
}
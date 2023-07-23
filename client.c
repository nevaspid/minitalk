/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:21:19 by gloms             #+#    #+#             */
/*   Updated: 2023/07/23 09:17:54 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	received(int signal)
{
	(void)signal;
	ft_printf("Message received\n");
}

void	char_to_binary(int pid, unsigned char c)
{
	int	bit;

	bit = 7;
	while (bit >= 0)
	{
		if (1 & (c >> bit))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		bit--;
	}
}

int	main(int ac, char **av)
{
	int	pid;
	int	i;

	i = 0;
	signal(SIGUSR1, received);
	if (ac != 3)
	{
		ft_printf("Error");
		exit(EXIT_FAILURE);
	}
	pid = ft_atoi(av[1]);
	while (av[2][i])
	{
		char_to_binary(pid, av[2][i]);
		i++;
	}
	char_to_binary(pid, '\0');
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:21:15 by gloms             #+#    #+#             */
/*   Updated: 2023/07/22 22:58:31 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	binary_to_char(int signum, siginfo_t *info, void *context)
{
	static unsigned char	c = 0;
	static int				count = 0;

	(void)context;
	(void)info;
	c <<= 1;
	if (signum == SIGUSR1)
		c += 1;
	count++;
	if (count == 8)
	{
		if (c == '\0')
			kill(info->si_pid, SIGUSR1);
		write(1, &c, 1);
		c = 0;
		count = 0;
	}
}

int	main(void)
{
	struct sigaction	act;
	pid_t				getpid();

	ft_printf("PID: %d\n", getpid());
	act.sa_sigaction = binary_to_char;
	sigemptyset(&act.sa_mask);
	act.sa_flags = SA_SIGINFO;
	while (1)
	{
		sigaction(SIGUSR1, &act, NULL);
		sigaction(SIGUSR2, &act, NULL);
		pause();
	}
	return (0);
}

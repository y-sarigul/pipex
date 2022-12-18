/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 20:27:29 by msarigul          #+#    #+#             */
/*   Updated: 2022/12/18 20:58:47 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int main(int argc, char **argv, char **evnp)
{
	int	fd[2];
	int	pid;

	if (argc == 5)
	{
		if ((pipe(fd)) == -1)
			ft_error("Pipe");
		pid = fork();
		if (pid == -1)
			ft_error("Pid");
		if (pid == 0)
		{
			ft_child_process(fd, 
		}
		else if (pid > 0)
		{

		}
	}
	else 
		ft_error("Argv");
}	

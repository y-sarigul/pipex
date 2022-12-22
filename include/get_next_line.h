/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 23:21:40 by msarigul          #+#    #+#             */
/*   Updated: 2022/12/22 22:30:24 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include "libft.h"
# include "pipex.h"
# define BUFFER_SIZE 1000

char	*get_next_line(int fd);
char	*ft_read_to_static(int fd, char *left_str);
char	*ft_gnl_strchr(char *s, int c);
char	*ft_gnl_strjoin(char *left_str, char *buff);
char	*ft_get_line(char *left_str);
char	*ft_new_left_str(char *left_str);

#endif

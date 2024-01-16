/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namorgha <namorgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:31:58 by namorgha          #+#    #+#             */
/*   Updated: 2022/11/09 17:42:05 by namorgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	*content[10240];
	char		buff[BUFFER_SIZE + 1];
	char		*ptr;
	int			r;

	r = 1;
	ptr = NULL;
	if (content[fd])
		ptr = joinstr(content[fd], ptr);
	while (r)
	{
		r = read(fd, buff, BUFFER_SIZE);
		if (r < 0)
			break ;
		buff[r] = '\0';
		ptr = joinstr(ptr, buff);
		if (new_line(ptr))
			break ;
	}
	content[fd] = get_last(ptr);
	return (get_new_line(ptr));
}

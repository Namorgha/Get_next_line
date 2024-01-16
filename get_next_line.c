/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namorgha <namorgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 22:38:59 by namorgha          #+#    #+#             */
/*   Updated: 2022/11/09 17:41:53 by namorgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*content;
	char		buff[BUFFER_SIZE + 1];
	char		*ptr;
	int			r;

	r = 1;
	ptr = NULL;
	if (content)
		ptr = ft_strjoin(content, ptr);
	while (r)
	{
		r = read(fd, buff, BUFFER_SIZE);
		if (r < 0)
			break ;
		buff[r] = '\0';
		ptr = ft_strjoin(ptr, buff);
		if (new_line(ptr))
			break ;
	}
	content = get_last(ptr);
	return (get_new_line(ptr));
}

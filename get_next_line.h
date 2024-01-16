/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namorgha <namorgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:20:54 by namorgha          #+#    #+#             */
/*   Updated: 2022/11/09 17:48:57 by namorgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

int			new_line(char *ptr);
char		*ft_strjoin(char *s1, char *s2);
size_t		ft_strlen(char *s);
char		*get_next_line(int fd);
char		*get_new_line(char *s1);
char		*get_last(char *s1);

#endif

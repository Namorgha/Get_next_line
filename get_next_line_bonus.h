/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namorgha <namorgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:41:39 by namorgha          #+#    #+#             */
/*   Updated: 2022/11/09 17:48:53 by namorgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

size_t	char_counter(char *s);
char	*get_next_line(int fd);
char	*joinstr(char *s1, char *s2);
char	*get_last(char *s1);
char	*get_new_line(char *str);
int		new_line(char *ptr);

#endif

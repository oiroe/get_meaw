/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 23:28:40 by pboonpro          #+#    #+#             */
/*   Updated: 2023/01/12 23:28:40 by pboonpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif

# include <fcntl.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s, int mode);
char	*ft_strjoin(char *old, char *to_join);
char	*get_next_line(int fd);
char	*ft_strdup(char *s1, int mode);

#endif

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
void	*ft_calloc(size_t count, size_t size);
size_t	ft_strlen(const char *s, int mode);
char	*ft_strjoin(char *old, char *to_join);
char	*trimming_stored(char *stored_next);
char	*trimming_return(char *stored_next);
char	*reading(int fd, char *to_return);
char	*get_next_line(int fd);
char	*ft_strdup(char *s1, int mode);

#endif

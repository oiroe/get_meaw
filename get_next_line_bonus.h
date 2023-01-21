/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <pboonpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 16:22:26 by pboonpro          #+#    #+#             */
/*   Updated: 2023/01/21 16:24:03 by pboonpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif

# include <fcntl.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <limits.h>

char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s, int mode);
char	*ft_strjoin(char *old, char *to_join);
char	*get_next_line(int fd);
char	*ft_strdup(char *s1, int mode);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 23:28:24 by pboonpro          #+#    #+#             */
/*   Updated: 2023/01/12 23:28:24 by pboonpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*reading(int fd, char *to_return)
{
	char	*temp;
	int		byte_read;

	if (!to_return)
		to_return = ft_calloc(1, sizeof(char));
	temp = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	byte_read = 1;
	while (byte_read > 0 && ft_strchr(temp, '\n') == NULL)
	{
		byte_read = read (fd, temp, BUFFER_SIZE);
		if (byte_read == -1)
		{
			free(temp);
			return (NULL);
		}
		temp[byte_read] = '\0';
		to_return = ft_strjoin(to_return, temp);
	}
	free(temp);
	return (to_return);
}

char	*get_next_line(int fd)
{
	char		*to_return;
	static char	*stored_next;

	to_return = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	to_return = reading(fd, to_return);
	if (to_return)
	{
		to_return = trimming_return();
		stored_next = trimming_stored();
	}
	return (to_return);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 23:24:41 by pboonpro          #+#    #+#             */
/*   Updated: 2023/01/14 23:24:41 by pboonpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	int		i;

	ptr = malloc(count * size);
	if (!ptr)
		return (0);
	i = 0;
	while (i < count)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*ใช้ free old ด้วย*/
char	ft_strjoin(char *old, char *to_join)
{
	char	*newstr;
	size_t	i;
	size_t	j;

	if (!old)
	{
		old = malloc(1 * sizeof(char));
		old[0] = '\0';
	}
	if (!old || !to_join)
		return (NULL);
	newstr = malloc(sizeof(char) * (ft_strlen(old) + ft_strlen(to_join) + 1));
	if (!newstr)
		return (NULL);
	while ()
	{

	}
	return (newstr);
}

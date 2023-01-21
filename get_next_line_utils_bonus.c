/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <pboonpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 16:22:31 by pboonpro          #+#    #+#             */
/*   Updated: 2023/01/21 16:24:31 by pboonpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}

/*void	ft_bzero(void *s, size_t count)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < count)
	{
		str [i] = '\0';
		i++;
	}
}*/

/*void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, count * size);
	return (ptr);
}*/

size_t	ft_strlen(const char *s, int mode)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		if (mode == 1 && s[i] == '\n')
			break ;
		i++;
	}
	return (i);
}

char	*ft_strjoin(char *old, char *join)
{
	char	*newstr;
	size_t	i;
	size_t	j;

	if (!old)
	{
		old = malloc(1 * sizeof(char));
		old[0] = '\0';
	}
	newstr = malloc((ft_strlen(old, 0)
				+ ft_strlen(join, 0) + 1) * sizeof(char));
	if (!newstr || !join)
		return (0);
	i = -1;
	if (old)
		while (old[++i])
			newstr[i] = old[i];
	j = 0;
	while (join[j])
		newstr[i++] = join[j++];
	newstr[i] = '\0';
	free(old);
	return (newstr);
}

char	*ft_strdup(char *s, int mode)
{
	char	*str;
	int		i;
	int		check;

	if (mode == 1)
		check = 2;
	else
		check = 1;
	str = malloc(sizeof(char) * (ft_strlen(s, mode) + check));
	if (!str)
		return (0);
	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		if (str[i] == '\n' && mode == 1)
		{
			i++;
			break ;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

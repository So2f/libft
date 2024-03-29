/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-kar <soel-kar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 02:07:18 by soel-kar          #+#    #+#             */
/*   Updated: 2021/09/04 02:07:19 by soel-kar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_trim2(const char *s1, const char *set, int *size)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(s1);
	while (i > 0)
	{
		j = 0;
		--i;
		while (s1[i] != set[j] && set[j])
			j++;
		if (set[j] == '\0')
			break ;
	}
	size[1] = i;
	return (size);
}

int		*ft_trim(const char *s1, const char *set, int *size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s1[i] != set[j] && set[j])
			j++;
		if (set[j] == '\0')
			break ;
		++i;
	}
	size[0] = i;
	size[1] = size[0] - 1;
	if (s1[i] == '\0')
		return (size);
	ft_trim2(s1, set, size);
	return (size);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		i;
	int		size[2];
	char	*dest;

	i = 0;
	if (s1[0] == '\0')
	{
		dest = malloc(sizeof(char));
		dest[0] = '\0';
		return (dest);
	}
	ft_trim(s1, set, size);
	if (!(dest = malloc(sizeof(char) * (size[1] - size[0] + 2))))
		return (NULL);
	while (i < (size[1] - size[0] + 1))
	{
		dest[i] = s1[size[0] + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
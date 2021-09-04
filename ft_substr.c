/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-kar <soel-kar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 02:07:27 by soel-kar          #+#    #+#             */
/*   Updated: 2021/09/04 02:07:28 by soel-kar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	int		i;

	i = start;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (s[i] == '\0' && len > 1)
		len = 1;
	while (s[i] != '\0')
		i++;
	if (len > (i - start))
		len = i - start;
	if (!(dest = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (len > 0)
	{
		dest[i++] = s[start];
		start++;
		len--;
	}
	dest[i] = '\0';
	return (dest);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-kar <soel-kar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 02:05:02 by soel-kar          #+#    #+#             */
/*   Updated: 2021/09/04 02:05:02 by soel-kar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	int		i;

	i = 0;
	while (s1[i])
		i++;
	if (!(dest = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	while (i >= 0)
	{
		dest[i] = s1[i];
		i--;
	}
	return (dest);
}
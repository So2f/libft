/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-kar <soel-kar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 02:03:07 by soel-kar          #+#    #+#             */
/*   Updated: 2021/09/04 02:03:08 by soel-kar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (dest - src > 0)
	{
		while (len > 0)
		{
			len--;
			((char*)dest)[len] = ((char*)src)[len];
		}
		return (dest);
	}
	while (i < len)
	{
		((char*)dest)[i] = ((char*)src)[i];
		i++;
	}
	return (dest);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-kar <soel-kar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 02:01:54 by soel-kar          #+#    #+#             */
/*   Updated: 2021/09/04 02:01:55 by soel-kar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dest;

	if (!count || !size)
		return (dest = malloc(count * size));
	if (!(dest = (void*)malloc(size * count)))
		return (NULL);
	return (ft_bzero(dest, count));
}
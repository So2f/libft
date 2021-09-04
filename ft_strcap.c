/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-kar <soel-kar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 03:00:28 by soel-kar          #+#    #+#             */
/*   Updated: 2021/09/04 03:00:28 by soel-kar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_islower(int c)
{
	return (c >= 'a' && 'z' >= c);
}


static int	ft_isspace(int c)
{
	return (c == '\t' || c == '\v' || c == '\n' || c == '\r' || c == '\f' \
			|| c == ' ');
}

char		*ft_strcap(char *str)
{
	int		i;

	i = 0;
	if (ft_islower(str[i]))
		str[i] -= 32;
	while (str[i++])
		if (ft_isspace(str[i]))
			if (ft_islower(str[i + 1]))
				str[i + 1] -= 32;
	return (str);
}
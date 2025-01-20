/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpodratc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 09:59:50 by hpodratc          #+#    #+#             */
/*   Updated: 2025/01/20 09:59:51 by hpodratc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t dsize)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		++i;
	while (src[j] && (i + j) < size - 1)
	{
		dst[i + j] = src[j];
		++j;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

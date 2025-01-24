/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpodratc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 09:57:37 by hpodratc          #+#    #+#             */
/*   Updated: 2025/01/24 20:17:22 by hpodratc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	if (!dest || !src)
		return (NULL);
	d = (char *)dest;
	s = (char *)src;
	if (!n || d == s)
		return (dest);
	while (n--)
		d[n] = s[n];
	return (dest);
}

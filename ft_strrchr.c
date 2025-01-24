/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpodratc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 10:02:12 by hpodratc          #+#    #+#             */
/*   Updated: 2025/01/22 16:33:52 by hpodratc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	if ((char)c == 0)
		return ((char *)s + len);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)s + len);
		--len;
	}
	return (NULL);
}

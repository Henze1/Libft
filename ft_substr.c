/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpodratc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 10:02:35 by hpodratc          #+#    #+#             */
/*   Updated: 2025/01/20 10:02:36 by hpodratc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub;
	size_t i;

	i = 0;
	sub = (char*)malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	if (len == 0 || start >= ft_strlen(s))
		return (ft_strdup(""));
	while (i < len && s[start + i])
	{
		sub[i] = s[start + i];
		++i;
	}
	sub[i] = '\0';
	return (sub);
}

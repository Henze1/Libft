/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpodratc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 09:48:37 by hpodratc          #+#    #+#             */
/*   Updated: 2025/01/20 09:48:39 by hpodratc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nelem, size_t elsize)
{
	size_t cap;
	void *ptr;

	if (nelem == 0 || elsize == 0)
		return (NULL);
	cap = nelem * elsize;
	ptr = malloc(cap);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, cap);
	return (ptr);
}

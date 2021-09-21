/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 12:51:48 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/21 14:20:48 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui reproduit a lidentique la fct memcpoy
// copy n bytes from src to dst

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (!(src) || !(dst))
		return (NULL);
	while ((n-- > 0))
	{
		((char *)dst)[n] = ((char *)src)[n];
	}
	return (dst);
}

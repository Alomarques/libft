/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloisiojr <aloisiojr@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:31:45 by aloisiojr         #+#    #+#             */
/*   Updated: 2024/12/03 18:31:37 by aloisiojr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr_src;
	unsigned char	*ptr_dst;
	size_t			i;

	ptr_src = (unsigned char *)src;
	ptr_dst = (unsigned char *)dst;
	i = -1;
	if (dst < src && (ptr_dst != NULL || ptr_src != NULL))
	{
		while (++i < n)
			ptr_dst[i] = ptr_src[i];
	}
	else if (ptr_dst != NULL || ptr_src != NULL)
	{
		while (n > 0)
		{
			n--;
			ptr_dst[n] = ptr_src[n];
		}
	}
	return (dst);
}

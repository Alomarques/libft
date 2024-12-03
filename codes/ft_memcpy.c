/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloisiojr <aloisiojr@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 09:56:31 by aloisiojr         #+#    #+#             */
/*   Updated: 2024/12/03 14:49:43 by aloisiojr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *d, const void *o, size_t len)
{
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*orig;

	i = 0;
	dest = (unsigned char *)d;
	orig = (const unsigned char *)o;
	if (len == 0 || d == o)
		return (d);
	while (i < len)
	{
		dest[i] = orig[i];
		i++;
	}
	return (d);
}

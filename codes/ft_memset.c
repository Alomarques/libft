/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloisiojr <aloisiojr@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 10:53:09 by aloisiojr         #+#    #+#             */
/*   Updated: 2024/12/03 14:39:36 by aloisiojr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *s, int value, size_t n)
{
	unsigned char	*m;
	size_t			i;

	m = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		m[i] = (unsigned char)value;
		i++;
	}
	return (s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloisiojr <aloisiojr@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 09:40:01 by aloisiojr         #+#    #+#             */
/*   Updated: 2024/12/03 16:05:41 by aloisiojr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*x;
	size_t			i;

	i = 0;
	x = (unsigned char *)s;
	while (i < n)
	{
		x[i] = '\0';
		i++;
	}
}

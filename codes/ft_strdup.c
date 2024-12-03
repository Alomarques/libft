/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloisiojr <aloisiojr@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:06:14 by aloisiojr         #+#    #+#             */
/*   Updated: 2024/12/03 16:26:27 by aloisiojr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*copy;

	size = ft_strlen(s) + 1;
	copy = malloc(size);
	if (copy == NULL)
		return (NULL);
	ft_memcpy(copy, s, size);
	return (copy);
}

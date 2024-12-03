/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloisiojr <aloisiojr@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:16:12 by aloisiojr         #+#    #+#             */
/*   Updated: 2024/12/03 16:27:45 by aloisiojr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*copy;
	size_t	str_len;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= str_len)
		return (ft_strdup(""));
	if (len > (str_len - start))
	{
		len = str_len - start;
	}
	copy = malloc(len + 1);
	if (copy == NULL)
		return (NULL);
	ft_memcpy(copy, s + start, len);
	copy[len] = '\0';
	return (copy);
}

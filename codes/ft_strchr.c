/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloisiojr <aloisiojr@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:59:47 by aloisiojr         #+#    #+#             */
/*   Updated: 2024/12/03 14:50:43 by aloisiojr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != (char)c && *str != '\0')
	{
		++str;
	}
	if (*str == (char)c)
	{
		return ((char *)str);
	}
	return (NULL);
}

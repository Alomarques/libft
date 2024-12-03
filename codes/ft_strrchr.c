/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloisiojr <aloisiojr@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:14:35 by aloisiojr         #+#    #+#             */
/*   Updated: 2024/12/03 18:33:24 by aloisiojr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*string;

	len = ft_strlen(s);
	c = (unsigned char)c;
	string = (char *)s + len;
	while (string >= s)
	{
		if (*string == c)
			return (string);
		string--;
	}
	return (NULL);
}

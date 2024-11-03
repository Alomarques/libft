/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloisiojr <aloisiojr@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:17:44 by aloisiojr         #+#    #+#             */
/*   Updated: 2024/10/20 11:48:04 by aloisiojr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t strlcpy(char *dest, const char *src, size_t size)
{
  size_t src_len;
  size_t i;
  src_len = ft_strlen(src);
  i = 0;

  if (size > 0)
  {
    while (i < size -1 && src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
    dest[i] = '\0';
  }
  return (src_len);
}

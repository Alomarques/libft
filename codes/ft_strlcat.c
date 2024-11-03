/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloisiojr <aloisiojr@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:01:15 by aloisiojr         #+#    #+#             */
/*   Updated: 2024/10/20 11:38:16 by aloisiojr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
  size_t i;
  i = 0;
  size_t src_len;
  src_len = ft_strlen(src);
  size_t j;
  j = 0;

  while (dest[i] != '\0')
    i++;

  if (i >= size)
  {
    return (size + src_len);
  }
  while (src[j] != '\0' && i + j < size -1)
  {
    dest[i +j] = src[j];
    j++;
  }
  dest[i + j] = '\0';
  return ( i + src_len);
}

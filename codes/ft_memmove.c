/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloisiojr <aloisiojr@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:31:45 by aloisiojr         #+#    #+#             */
/*   Updated: 2024/10/20 10:52:03 by aloisiojr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void  *ft_memmove(void *dest, const void *src, size_t leng)
{
  unsigned char *d = dest;
  const unsigned char *s = src;
  size_t i;
  i = 0;

  if (dest == src)
  {
    return (dest);
  }
  if (d < s)
  {
    while (i < leng)
    {
      d[i] = s[i];
      i++;
    }
  }
  else
  {
    i = leng;
    while (i > 0)
    {
      d[i-1] = s[i-1];
      i--;
    }
  }
  return (dest);
}

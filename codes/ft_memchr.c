/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloisiojr <aloisiojr@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 13:07:29 by aloisiojr         #+#    #+#             */
/*   Updated: 2024/10/26 11:28:56 by aloisiojr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void  *memchr(const void *s, int c, size_t n)
{
  const unsigned char *ptr;
  size_t i;

  ptr = (const unsigned char *)s;
  i = 0;


  while (i < n)
  {
    if (ptr[i] == (unsigned char)c)
    {
      return ((void *)(ptr + i));
    }
    i++;
  }
  return (NULL);
}

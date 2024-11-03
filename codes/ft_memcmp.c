/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloisiojr <aloisiojr@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 13:28:52 by aloisiojr         #+#    #+#             */
/*   Updated: 2024/10/20 13:50:34 by aloisiojr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int memcmp(const void *s1, const void *s2, size_t n)
{
  size_t i;
  const unsigned char *ptr1;
  const unsigned char *ptr2;

  i = 0;
  ptr1 = (const unsigned char *)s1;
  ptr2 = (const unsigned char *)s2;

  while (i < n)
  {
    if (ptr1[i] != ptr2[i])
    {
      return (ptr1[i] - ptr2[i]);
    }
    i++;
  }
  return (0);
}

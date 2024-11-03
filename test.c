/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloisiojr <aloisiojr@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 13:07:29 by aloisiojr         #+#    #+#             */
/*   Updated: 2024/10/26 11:19:44 by aloisiojr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void bzero(void *s, size_t n)
{
  unsigned char *z = (unsigned char *)s;
  int i = 0;

  if (!n)
    return (NULL);
  while (i < n)
  {
    z[i] = 0;
    i++;
  }
  return (*s);
}

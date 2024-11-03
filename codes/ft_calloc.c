/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloisiojr <aloisiojr@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:36:47 by aloisiojr         #+#    #+#             */
/*   Updated: 2024/10/22 18:30:22 by aloisiojr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void *ft_calloc(size_t num, size_t size)
{
  void *ptr;
  size_t total_size;

  total_size = num * size;
  ptr = malloc(total_size);
  if (ptr == NULL)
    return (NULL);

  ft_memset(ptr, 0, total_size);

  return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloisiojr <aloisiojr@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 10:53:09 by aloisiojr         #+#    #+#             */
/*   Updated: 2024/10/20 11:04:45 by aloisiojr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void  *ft_memset(void *s, int value, size_t n)
{
    unsigned char *m;
    m = (unsigned char *)s;

    size_t i;
    i = 0;

    while (i < n)
    {
      m[i] = (unsigned char)value;
      i++;
    }
    return (s);
}

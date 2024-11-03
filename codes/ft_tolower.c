/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloisiojr <aloisiojr@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:55:38 by aloisiojr         #+#    #+#             */
/*   Updated: 2024/10/20 11:03:42 by aloisiojr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int ft_tolower(int ch)
{
  if (ch >= 65 && ch <= 90)
  {
    ch = ch + 32;
  }
  return (ch);
}
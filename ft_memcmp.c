/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybelatar <ybelatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:03:42 by ybelatar          #+#    #+#             */
/*   Updated: 2023/11/07 20:41:00 by ybelatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *(unsigned char *)(s1 + i) == *(unsigned char *)(s2 + i))
		i++;
	if (i == n)
		return (0);
	return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
}

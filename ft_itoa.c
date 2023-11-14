/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybelatar <ybelatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:02:56 by ybelatar          #+#    #+#             */
/*   Updated: 2023/11/08 12:32:07 by ybelatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_nbr(int nbr)
{
	int	len;

	if (nbr == 0)
		return (1);
	len = 0;
	if (nbr < 0)
		len++;
	while (nbr != 0)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}

static char	*res_zero(void)
{
	char	*res;

	res = malloc(2);
	res[0] = '0';
	res[1] = 0;
	return (res);
}

char	*ft_itoa(int n)
{
	int			len;
	long int	nb;
	char		*res;

	if (n == 0)
		return (res_zero());
	len = len_nbr(n);
	nb = (long int)n;
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	if (nb < 0)
	{
		res[0] = '-';
		nb *= -1;
	}
	while (nb != 0)
	{
		res[len - 1] = (nb % 10) + '0';
		nb /= 10;
		len--;
	}
	res[len_nbr(n)] = 0;
	return (res);
}

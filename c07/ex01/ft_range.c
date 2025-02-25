/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakarya <ysakarya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:03:53 by ysakarya          #+#    #+#             */
/*   Updated: 2024/02/15 05:52:58 by ysakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	n;
	int	i;

	if (max <= min)
		return (0);
	else
		n = max - min;
	a = (int *) malloc(n * sizeof(int));
	if (!a)
		return (0);
	else
	{
		i = 0;
		while (i < n)
		{
			a[i] = min + i;
			i ++;
		}
		return (a);
	}
}

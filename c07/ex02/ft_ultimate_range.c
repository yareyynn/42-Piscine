/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakarya <ysakarya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:31:42 by ysakarya          #+#    #+#             */
/*   Updated: 2024/02/15 02:40:39 by ysakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	n;
	int	*ptr;

	if (max > min)
		ptr = (int *) malloc((max - min) * sizeof(int));
	else
	{
		*range = NULL;
		return (0);
	}
	if (!ptr)
		return (-1);
	else
	{
		n = 0;
		while (n < (max - min))
		{
			ptr[n] = min + n;
			n++;
		}
		*range = ptr;
	}
	return (n);
}

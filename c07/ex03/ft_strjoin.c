/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakarya <ysakarya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:23:54 by ysakarya          #+#    #+#             */
/*   Updated: 2024/02/15 05:53:29 by ysakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	man_strlen(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	ctr;

	i = 0;
	ctr = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j++])
			ctr++;
		i++;
	}
	i = 0;
	while (sep[i])
		i++;
	return (ctr + ((size - 1) * i));
}

char	*man_printer(char *a, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (j < size)
	{
		while (strs[j][k])
			a[i++] = strs[j][k++];
		k = 0;
		j++;
		while (sep[k] && j != size)
			a[i++] = sep[k++];
		k = 0;
	}
	a[i] = '\0';
	return (a);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*a;
	int		b;

	if (size == 0)
	{
		a = (char *)malloc(0);
		return (a);
	}
	else
	{
		b = man_strlen(size, strs, sep);
		a = (char *)malloc((b + 1) * sizeof(char));
		if (!a)
			return (0);
		else
			return (man_printer(a, strs, sep, size));
	}
}

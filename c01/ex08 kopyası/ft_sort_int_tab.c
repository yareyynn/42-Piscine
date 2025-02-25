/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakarya <ysakarya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 07:56:52 by ysakarya          #+#    #+#             */
/*   Updated: 2024/01/31 08:46:43 by ysakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	i;
	int	temp;

	a = 0;
	while (a < size)
	{
		i = 0;
		while (i < a)
		{
			if (tab[a] < tab[i])
			{
				temp = tab[a];
				tab[a] = tab[i];
				tab[i] = temp;
			}
			i++;
		}
		a++;
	}
}

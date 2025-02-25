/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakarya <ysakarya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 09:14:43 by ysakarya          #+#    #+#             */
/*   Updated: 2024/02/07 00:30:38 by ysakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (i[str] != '\0')
	{
		write (1, &i[str], 1);
		i++;
	}
}

int main(){
	char  *str = "selam";
	ft_putstr(str);
	return(0);
}
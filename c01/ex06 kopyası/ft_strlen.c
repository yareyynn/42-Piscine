/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakarya <ysakarya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 00:11:25 by ysakarya          #+#    #+#             */
/*   Updated: 2024/02/07 00:33:22 by ysakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	counter;
	int	i;

	counter = 0;
	i = 100;
	while (i[str] != '\0')
	{
		counter++;
		i++;
	}
	return (counter);
}
#include "stdio.h"
int main(){
 char *str = "selam";
 int i = ft_strlen(str);
 printf("%d", i);
}
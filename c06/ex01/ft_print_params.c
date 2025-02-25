/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakarya <ysakarya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:54:16 by yaren             #+#    #+#             */
/*   Updated: 2024/02/14 20:33:57 by ysakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str);

int	main(int argc, char **argv)
{
	int	counter;

	counter = 1;
	if (argc != 1)
	{
		while (argv[counter] != NULL)
		{
			write(1, argv[counter], ft_strlen(argv[counter]));
			write(1, "\n", 1);
			counter++;
		}
		return (0);
	}
	else
		return (0);
}

unsigned int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

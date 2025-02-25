/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakarya <ysakarya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 21:51:24 by ysakarya          #+#    #+#             */
/*   Updated: 2024/02/04 21:51:27 by ysakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	n;

	n = 1;
	if (str[0] == '\0')
		return (str);
	else
	{
		ft_strupcase(str);
		while (str[n] != '\0')
		{
			if ('A' <= str[n] && str[n] <= 'Z')
			{
				if ('0' <= str[n - 1] && str[n - 1] <= '1')
					str[n] = str[n] + 32;
				else if ('a' <= str[n - 1] && str[n - 1] <= 'z')
					str[n] = str[n] + 32;
				else if ('A' <= str[n - 1] && str[n - 1] <= 'Z')
					str[n] = str[n] + 32;
			}
			n++;
		}
		return (str);
	}
}

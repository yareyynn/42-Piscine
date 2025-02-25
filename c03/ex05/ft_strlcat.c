#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int a;
	unsigned int b;

	i = 0;
	j = ft_strlen(dest);
	a = ft_strlen(dest);
	b = ft_strlen(src);

	if(size != 0)
	{
		while (src[i] != '\0' && j < size - a - 1)
		{
			dest[j] = src[i];
			j++;
			i++;
		}
		dest[j] = '\0';
	}
	return (a + b);
}

int main()
{
	char dest[] = "yaren";
	char src[] = "fgh";
	printf("%d", ft_strlcat(dest, src, 6));
}
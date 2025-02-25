#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if(to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if(str[i] == to_find[j])
			{
				j++;
				if(to_find[j] == '\0')
					return (str+i-j+1);
			}
		else
			j=0;
		i++;
	}
	return (0);
}


int main()
{
	char str[] = "yarenysakarya";
	char to_find[] = "ak";
	ft_strstr(str, to_find);
	printf("%s", );
}
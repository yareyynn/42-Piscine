int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && i<n && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

#include "stdio.h"
int main(){
	char *str ="aaaaaaa";
	char *str2 ="aaaaaac";
	printf("%d", ft_strncmp(str, str2, 8));
}

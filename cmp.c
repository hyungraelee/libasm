int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s2[i] != '\0')
		return (s1[i] - s2[i]);
	return (0);
}
#include <stdio.h>
#include <string.h>
int main()
{
	// char a[] = "abc";
	char	dst1[6] = "abcde";
	printf("%s\n", strcpy(dst1, "ABCDEF"));
	// printf("%d\n", ft_strcmp("abc", "abc"));
	// printf("%d\n", ft_strcmp("", "0"));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 22:21:33 by hyunlee           #+#    #+#             */
/*   Updated: 2021/04/01 22:10:05 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <stdio.h>

void	check_ft_strlen(void)
{
	printf("%s", B_GREEN);
	printf("-------------------------------------\n");
	printf("Check >>> ft_strlen\n");
	printf("result of 'empty string'	= %zu\n", ft_strlen(""));
	printf("result of 'hello'		= %zu\n", ft_strlen("hello"));
	printf("result of 'long string'		= %zu\n", \
	ft_strlen("12345678901234567890abcdefghijklmnopqrstuvwxyz12345678901234567890"));
	printf("-------------------------------------\n\n");
	printf("%s", C_RESET);
}

void	check_ft_strcpy(void)
{
	// char	dst[] = "abcde";
	char	dst[200];

	printf("%s", B_YLW);
	printf("-------------------------------------\n");
	printf("Check >>> ft_strcpy\n");
	// printf("dst : %s\n", dst);
	printf("result of copy 'empty string'	= %s\n", ft_strcpy(dst, ""));
	printf("result of copy 'ABC'		= %s\n", ft_strcpy(dst, "ABC"));
	printf("result of copy 'long string'	= %s\n", ft_strcpy(dst, "12345678901234567890abcdefghijklmnopqrstuvwxyz12345678901234567890"));
	// printf("result of copy 'long string'	= %s\n", ft_strcpy(dst, "12345678"));
	printf("-------------------------------------\n\n");
	printf("%s", C_RESET);
}

// void	check_ft_strcmp(void)
// {
// 	printf("-------------------------------------\n");
// 	printf("%d\n", ft_strcmp("c", "a"));
// 	printf("%d\n", ft_strcmp("abc", "abcd"));
// 	printf("-------------------------------------\n");
// }

void	test_write_read(void)
{
	int		fd;
	char	buf[10];

	printf("\n\n*ft_write test\n");
	fd = open("./test.txt", O_WRONLY);
	printf("\nwrite return : %zd\n", ft_write(1, "hello", 5));
	printf("\nwrite return : %zd\n", ft_write(-1, "hello", 5));
	printf("\nwrite return : %zd\n", ft_write(fd, "gogijoa", 7));
	close(fd);
	printf("\n\n*ft_read test\n");
	fd = open("./test.txt", O_RDONLY);
	printf("read return : %zd\n", ft_read(0, buf, 5));
	printf("read buf : %s\n\n", buf);
	printf("read return : %zd\n", ft_read(fd, buf, 8));
	printf("read buf : %s\n\n", buf);
	printf("read return : %zd\n", ft_read(-1, buf, 5));
}

int main()
{
	check_ft_strlen();
	check_ft_strcpy();
	test_write_read();
	// check_ft_strcmp();
	// check_ft_write();
	// check_ft_read();
	// check_ft_strdup();
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 22:21:33 by hyunlee           #+#    #+#             */
/*   Updated: 2021/04/01 00:31:27 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <stdio.h>

void	check_ft_strlen(void)
{
	printf("%s", B_GREEN);
	printf("-------------------------------------\n");
	printf("Check ft_strlen\n");
	printf("result of 'empty string'	= %zu\n", ft_strlen(""));
	printf("result of 'hello'		= %zu\n", ft_strlen("hello"));
	printf("result of 'long string'		= %zu\n", \
	ft_strlen("12345678901234567890abcdefghijklmnopqrstuvwxyz"));
	printf("-------------------------------------\n\n");
	printf("%s", C_RESET);
}

void	check_ft_strcmp(void)
{
	printf("-------------------------------------\n");
	printf("%d\n", ft_strcmp("c", "a"));
	printf("%d\n", ft_strcmp("abc", "abcd"));
	printf("-------------------------------------\n");
}

void	check_ft_strcpy(void)
{
	char	dst1[] = "abcde";
	printf("%s\n", ft_strcpy(dst1, "ABCDEF"));
}

// void	check_ft_strcpy(void)
// {

// }

int main()
{
	check_ft_strlen();
	check_ft_strcmp();
	check_ft_strcpy();
	// check_ft_strdup();
	// check_ft_read();
	// check_ft_write();
}

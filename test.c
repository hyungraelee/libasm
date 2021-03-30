/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 22:21:33 by hyunlee           #+#    #+#             */
/*   Updated: 2021/03/30 18:36:04 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <stdio.h>

void	check_ft_strlen(void)
{
	printf("-------------------------------------\n");
	printf("Check ft_strlen\n");
	printf("result of 'empty string'	= %zu\n", ft_strlen(""));
	printf("result of 'hello'		= %zu\n", ft_strlen("hello"));
	printf("result of 'long string'		= %zu\n", \
	ft_strlen("12345678901234567890abcdefghijklmnopqrstuvwxyz"));
}

int main()
{
	check_ft_strlen();
	printf("-------------------------------------\n");
	printf("%d\n", ft_strcmp("c", "d"));
	printf("%d\n", ft_strcmp("abc", "abcd"));
}

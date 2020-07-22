/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 20:30:57 by hthomas           #+#    #+#             */
/*   Updated: 2020/07/22 11:39:23 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <stdio.h>
#include <string.h>

int main()
{
	printf("strlen tests: (expected and mine)\n");
	printf("%ld\n%ld\n", strlen(""), ft_strlen(""));
	printf("\n%ld\n%ld\n", strlen("test"), ft_strlen("test"));
	printf("\n%ld\n%ld\n", strlen("12\n3"), ft_strlen("12\n3"));
	printf("\n%ld\n%ld\n", strlen("test"), ft_strlen("test"));
	printf("\n%ld\n%ld\n", strlen("test"), ft_strlen("test"));

	printf("\nstrcpy tests: (expected and mine)\n");
	char hello[100] = "Hello Wolrd!\0";
	char hi[100] = "Hi Friend\0";
	printf("%s\n%s\n", strcpy(hello, hi), ft_strcpy(hello, hi));
	memcpy(hello ,"Hello Wolrd!\0", 14);
	printf("\n%s\n%s\n", strcpy(hi, hello), ft_strcpy(hi, hello));

	return 0;
}

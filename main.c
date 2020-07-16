/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 20:30:57 by hthomas           #+#    #+#             */
/*   Updated: 2020/07/16 20:37:02 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <stdio.h>
#include <string.h>

int	main()
{
	printf("strlen tests: (expected and mine)\n");
	printf("%ld\n%ld\n",	strlen(""),		ft_strlen(""));
	printf("\n%ld\n%ld\n",	strlen("test"),	ft_strlen("test"));
	printf("\n%ld\n%ld\n",	strlen("12\n3"),ft_strlen("12\n3"));
	printf("\n%ld\n%ld\n",	strlen("test"),	ft_strlen("test"));
	printf("\n%ld\n%ld\n",	strlen("test"),	ft_strlen("test"));
	
	printf("\nstrcpy tests: (expected and mine)\n");
	char *hello = malloc(sizeof(char) * 14);
	char *hi = malloc(sizeof(char) * 11);
	hello = "Hello Wolrd!\0";
	hi = "Hi Friend\0";
	printf("%s\n%s\n", strcpy(hello, hi), ft_strcpy(hello, hi));
	//printf("\n%s\n%s\n", strcpy("hello world!", "test"), ft_strcpy("hello world!", "test"));

	return 0;
}

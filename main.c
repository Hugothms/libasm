/* ************************************************************************** */
/*                                                                            */
/*                                                       :::     ::::::::   */
/*   main.c                                            :+:     :+:   :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 18:03:55 by vmoreau           #+#    #+#             */
/*   Updated: 2020/07/28 22:50:44 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>

#define BLACK		"\033[38;5;0m"
#define RED			"\033[38;5;196m"
#define REDL		"\033[1;31m"
#define GREEN		"\033[38;5;46m"
#define CYAN		"\033[0;36m"
#define YELLOW		"\033[1;33m"
#define NC			"\033[m"

static void test_strlen()
{
    printf("%sTest FT_STRLEN:\n%s", CYAN, NC);
    char *str = "|Test FT_STRLEN|";
    printf("Me:\t%zu\nBase:\t%zu\n", ft_strlen(str), strlen(str));
    str = "";
    printf("\nMe:\t%zu\nBase:\t%zu\n", ft_strlen(str), strlen(str));
    printf("%s#--------------------#%s\n", RED, NC);
}

static void test_strcpy()
{
    printf("%sTest FT_STRCPY:\n%s", CYAN, NC);
    char dst[100] = "|Dest base string|";
    char dstb[100] = "|Dest base string|";
    char *src = "|Test FT_STRCPY|";
    printf("Me:\n\tNo Modif dest %s\n\t", dst);
    printf("Return:       %s\n\tModif Dest:   %s\n\n", ft_strcpy(dst, src), dst);
    printf("Base:\n\tNo Modif dest %s\n\t", dstb);
    printf("Return:       %s\n\tModif Dest:   %s\n", strcpy(dstb, src), dstb);
    printf("%s#--------------------#%s\n", RED, NC);
}

static void test_strcmp()
{
    printf("%sTest FT_STRCMP:\n%s", CYAN, NC);
    char *s1 = "abcet";
    char *s2 = "abcef";
    printf("Me: %d\t| Base: %d\n", ft_strcmp(s1, s2), strcmp(s1, s2));
    printf("Me: %d\t| Base: %d\n", ft_strcmp(s2, s1), strcmp(s2, s1));
    printf("Me: %d\t| Base: %d\n", ft_strcmp(s1, s1), strcmp(s1, s1));
    printf("%s#--------------------#%s\n", RED, NC);
}

static void test_write()
{
    int ret = 0;
    char *str = "|Test FT_WRITE|";
    printf("%sTest FT_WRITE:%s\n", CYAN, NC);
    ft_write(1, "Me:\t", 5);
    ret = ft_write(1, str, ft_strlen(str));
    printf("\nReturn = %d ", ret);
    printf("\nErrno:%s\t%s%s\n",GREEN, strerror(errno), NC);
    write(1, "\nBase:\t", 7);
    ret = write(1, str, strlen(str));
    printf("\nReturn = %d ", ret);
    printf("\nErrno:%s\t%s%s\n",GREEN, strerror(errno), NC);
    printf("%s#--------------------#%s\n", RED, NC);
}

static void test_read()
{
    printf("%sTest FT_READ:\n%s", CYAN, NC);
    int fd = open("./text", O_RDONLY);
    int fd2 = open("./text", O_RDONLY);
    int ret = 1;
    int nbyte = 5;
    char buf[nbyte + 1];
    printf("Me:\t");
    while (ret > 0)
    {
        ret = ft_read(fd, buf, nbyte);
        buf[ret]= 0;
        if (ret > -1)
            printf("%s", buf);
    }
    printf("\nReturn: %d ", ret);
    printf("\nErrno:%s\t%s%s",GREEN, strerror(errno), NC);
    ret = 1;
    printf("\n\nBase:\t");
    while (ret > 0)
    {
        ret = ft_read(fd2, buf, nbyte);
        buf[ret]= 0;
        if (ret > -1)
            printf("%s", buf);
    }
    printf("\nReturn: %d ", ret);
    printf("\nErrno:%s\t%s%s",GREEN, strerror(errno), NC);
    printf("\n%s#--------------------#%s\n", RED, NC);
}

static void test_strdup()
{
    printf("%sTest FT_STRDUP:\n%s", CYAN, NC);
    char *dup;
    char *dupb;
    char *str = "|Test FT_STRDUP|";
    dup = ft_strdup(str);
    dupb = strdup(str);
    printf("Me:   %s\n", dup);
    printf("Base: %s\n", dupb);
    printf("%s#--------------------#%s\n", RED, NC);
    free(dup);
    free(dupb);
}

int main()
{
    printf("%s#--------------------#%s\n", RED, NC);
    test_strlen();
    test_strcpy();
    test_strcmp();
    test_write();
    test_read();
    test_strdup();
    return (0);
}
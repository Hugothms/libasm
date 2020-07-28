/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 09:07:51 by hthomas           #+#    #+#             */
/*   Updated: 2020/07/28 23:04:59 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

# include <stdlib.h>

extern size_t				ft_strlen(const char *str);
extern char					*ft_strcpy(char *dst, const char *src);
extern int					ft_strcmp(const char *str1, const char *str2);
extern size_t				ft_write(int fd, const void *buf, size_t nbyte);
extern size_t				ft_read(int fd, void *buf, size_t nbyte);
extern char					*ft_strdup(const char *str);

#endif

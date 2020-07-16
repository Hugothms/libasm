/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 09:07:51 by hthomas           #+#    #+#             */
/*   Updated: 2020/07/16 09:08:11 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

# include <stdlib.h>

extern size_t				ft_strlen(const char *s);
extern char					*ft_strcpy(char *dst, const char *src);
extern int					ft_strcmp(const char *s1, const char *s2);
extern size_t				ft_write(int fildes, const void *buf, size_t nbyte);
extern size_t				ft_read(int fildes, void *buf, size_t nbyte);

#endif

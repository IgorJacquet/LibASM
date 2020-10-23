/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijacquet <ijacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 14:18:27 by igor              #+#    #+#             */
/*   Updated: 2020/10/23 17:52:11 by ijacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H
# include <stdlib.h>
# include <stddef.h>
# include <string.h>
# include <unistd.h>

int		ft_strcmp(const char *s1, const char *s2);
ssize_t	ft_write(int fd, const char *str, size_t len);
size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strdup(const char *str);
ssize_t	ft_read(int fd, const char *str, size_t len);

#endif

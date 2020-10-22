/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igor <igor@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 14:18:27 by igor              #+#    #+#             */
/*   Updated: 2020/10/21 16:53:47 by igor             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H
# include <stdlib.h>
# include <stddef.h>
# include <string.h>
# include <unistd.h>

int		ft_strcmp(const char *s1, const char *s2);
int     ft_write(int fd, char *str, int len);
int     ft_strlen(const char *s);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igor <igor@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 14:18:25 by igor              #+#    #+#             */
/*   Updated: 2020/10/21 17:04:40 by igor             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <stdio.h>

int			main(int argc, char *argv[])
{
	printf("%d\n", write(1, "poi^p", 5));
	printf("%d\n", ft_write(1, "poi^p", 5));
	return (0);
}
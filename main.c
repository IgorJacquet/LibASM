/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijacquet <ijacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 17:53:59 by ijacquet          #+#    #+#             */
/*   Updated: 2020/10/23 17:54:30 by ijacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <stdio.h>
#include <fcntl.h>

int	main(int argc, char *argv[])
{
	int		fd;
	char	test[7];
	char	*str;

	str = malloc(0);
	fd = open("main.c", O_RDONLY);
	printf("READ NORMAL : %zd\n", read(fd, test, 7));
	printf("%s\n", test);
	fd = open("main.c", O_RDONLY);
	printf("READ LIBASM : %zd\n", ft_read(fd, test, 7));
	printf("%s\n", test);
	printf("WRITE NORMAL : %zd\n", write(1, "\nwritetest12\n", 13));
	printf("WRITE LIBASM : %zd\n", ft_write(1, "writetest12 \n", 13));
	printf("\nSTRLEN NORMAL : %zu\n", strlen("strlentest12\n"));
	printf("STRLEN LIBASM : %zu\n", ft_strlen("strlentest12\n"));
	printf("\nSTRCMP NORMAL : %d\n", strcmp("test", "test"));
	printf("STRCMP LIBASM : %d\n", ft_strcmp("test", "test"));
	printf("\nSTRDUP NORMAL : %s\n", strdup("poi^p"));
	printf("STRDUP LIBASM : %s\n", ft_strdup("poi^p"));
	printf("\nSTRCPY NORMAL : %s\n", strcpy(str, "copy"));
	printf("STRCPY LIBASM : %s\n", ft_strcpy(str, "copy"));
	return (0);
}

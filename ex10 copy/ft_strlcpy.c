/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <aorynbay@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 12:51:11 by aorynbay          #+#    #+#             */
/*   Updated: 2024/05/05 12:51:12 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char str1[] = "Hello world";
// 	char str2[] = "Goodbye";
// 	ft_strlcpy(str1, str2, 4);
// 	printf("%s", 7);
// 	printf("%c", '\n');
// 	char str3[] = "Hello world";
// 	char str4[] = "Goodbye";
// 	size_t len = strlcpy(str3, str4, 4);
// 	printf("%zu", len);
// }
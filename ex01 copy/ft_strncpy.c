/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <aorynbay@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:27:01 by aorynbay          #+#    #+#             */
/*   Updated: 2024/05/03 14:27:03 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char str1[] = "Hel";
// 	char str2[] = "Goodbye";
// 	ft_strncpy(str1, str2, 6);
// 	printf("%s", str1);
// }
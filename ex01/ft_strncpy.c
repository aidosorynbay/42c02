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
	while (i != n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

// #include <unistd.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char str1[] = "Hello world";
// 	char str2[] = "Goodbye";
// 	ft_strncpy(str1, str2, 3); 
// 	printf("%s", str1);
// }
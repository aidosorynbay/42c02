/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <aorynbay@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 10:04:53 by aorynbay          #+#    #+#             */
/*   Updated: 2024/05/03 10:04:56 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

// #include <unistd.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char str1[] = "Goodbye";
// 	char str2[] = "Hello, world!";
// 	ft_strcpy(str1, str2); 
// }

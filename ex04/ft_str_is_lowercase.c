/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <aorynbay@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 17:04:19 by aorynbay          #+#    #+#             */
/*   Updated: 2024/05/03 17:04:21 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 97 && str[i] <= 122)
	{
		i++;
	}
	if (str[i] == '\0')
	{
		printf("%i\n", 1);
		return (1);
	}
	else
	{
		printf("%i\n", 0);
		return (0);
	}
}

// #include <unistd.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char alph_abet[] = "kfjgtvldkijg";
// 	char not_alph[] = "abcdefghijkTl";
// 	char empty_str[] = "Y3adsaffq";
// 	ft_str_is_lowercase(alph_abet);
// 	ft_str_is_lowercase(not_alph);
// 	ft_str_is_lowercase(empty_str);
// }
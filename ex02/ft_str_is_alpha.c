/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <aorynbay@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 15:19:04 by aorynbay          #+#    #+#             */
/*   Updated: 2024/05/03 15:19:06 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 65 && str[i] <= 122)
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
// 	char alph_abet[] = "kfjgTvldkijg";
// 	char not_alph[] = "abcdefghijk2l";
// 	char empty_str[] = "23adsaffq";
// 	ft_str_is_alpha(alph_abet);
// 	ft_str_is_alpha(not_alph);
// 	ft_str_is_alpha(empty_str);
// }
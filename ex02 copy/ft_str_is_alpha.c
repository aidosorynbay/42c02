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
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>
// #include <unistd.h>
// int	main(void)
// {
// 	char alph_abet[] = "kfjgTvldkijg";
// 	char not_alph[] = "abcdefghijk2l";
// 	char empty_str[] = "";
// 	ft_str_is_alpha(alph_abet);
// 	ft_str_is_alpha(not_alph);
// 	ft_str_is_alpha(empty_str);
// }
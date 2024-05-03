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
	if (str[i] >= 65 && str[i] <= 122)
	{
		while (str[i] >= 65 && str[i] <= 122)
		{
			i++;
		}
		return (1);
	}
	else
	{
		return (0);
	}
}

// #include <unistd.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char alph_abet[] = "kfjgTvldkijg";
// 	char not_alph[] = "3543gF/*";
// 	char empty_str[] = "";
// 	ft_str_is_alpha(alph_abet);
// 	ft_str_is_alpha(not_alph);
// 	ft_str_is_alpha(empty_str);
// }
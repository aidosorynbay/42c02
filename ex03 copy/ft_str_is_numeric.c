/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <aorynbay@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:42:08 by aorynbay          #+#    #+#             */
/*   Updated: 2024/05/03 16:42:15 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		i++;
	}
	if (str[i] == '\0')
	{
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
// 	char alph_abet[] = "384759253";
// 	char not_alph[] = "48504590g90";
// 	char empty_str[] = "";
// 	ft_str_is_numeric(alph_abet);
// 	ft_str_is_numeric(not_alph);
// 	ft_str_is_numeric(empty_str);
// }
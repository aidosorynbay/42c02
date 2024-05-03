/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <aorynbay@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 17:18:34 by aorynbay          #+#    #+#             */
/*   Updated: 2024/05/03 17:18:36 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 65 && str[i] <= 90)
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
// 	char alph_abet[] = "DLKJFLSDJF";
// 	char not_alph[] = "SKDFLSJFLkDKJF";
// 	char empty_str[] = "a3KDJFA";
// 	ft_str_is_uppercase(alph_abet);
// 	ft_str_is_uppercase(not_alph);
// 	ft_str_is_uppercase(empty_str);
// }
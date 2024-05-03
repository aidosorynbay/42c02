/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <aorynbay@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 17:27:46 by aorynbay          #+#    #+#             */
/*   Updated: 2024/05/03 17:27:48 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 32 && str[i] <= 126)
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
// 	char not_alph[] = "\n\t\v\f";
// 	char empty_str[] = "__--__";
// 	ft_str_is_printable(alph_abet);
// 	ft_str_is_printable(not_alph);
// 	ft_str_is_printable(empty_str);
// }
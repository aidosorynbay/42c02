/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <aorynbay@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:41:47 by aorynbay          #+#    #+#             */
/*   Updated: 2024/05/03 18:41:49 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

// #include <unistd.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char alph_abet[] = "DSKJF";
// 	char not_alph[] = "dfSDFDS";
// 	char empty_str[] = "__-__sdasDSA";
// 	ft_strlowcase(alph_abet);
// 	ft_strlowcase(not_alph);
// 	ft_strlowcase(empty_str);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <aorynbay@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:02:17 by aorynbay          #+#    #+#             */
/*   Updated: 2024/05/03 18:02:19 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = str[i] - 32;
		i++;
	}
	return (*str);
}

// #include <unistd.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char alph_abet[] = "sdlfjlkdjf";
// 	char not_alph[] = "ksjdf";
// 	char empty_str[] = "aksjdf";
// 	ft_strupcase(alph_abet);
// 	ft_strupcase(not_alph);
// 	ft_strupcase(empty_str);
// }
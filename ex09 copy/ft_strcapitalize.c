/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <aorynbay@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 12:27:43 by aorynbay          #+#    #+#             */
/*   Updated: 2024/05/04 12:27:45 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*check_lower(char *ch)
{
	int	i;

	i = 1;
	while (ch[i] != '\0')
	{
		if (ch[i] >= 'a' && ch[i] <= 'z')
		{
			if (!((ch[i - 1] >= 'a' && ch[i - 1] <= 'z')
					|| (ch[i - 1] >= 'A' && ch[i - 1] <= 'Z')
					|| (ch[i - 1] >= '0' && ch[i - 1] <= '9')))
			{
				ch[i] = ch[i] - 32;
			}
			i++;
		}
		else if (ch[i] >= 'A' && ch[i] <= 'Z')
		{
			if ((ch[i - 1] >= 'a' && ch[i - 1] <= 'z')
				|| (ch[i - 1] >= 'A' && ch[i - 1] <= 'Z'))
			{
				ch[i] += 32;
			}
			i++;
		}
		else
		{
			i++;
		}
	}
	return (ch);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 97 && str[i] <= 122)
	{
		str[i] = str[i] - 32;
	}
	i++;
	check_lower(str);
	return (str);
}

// #include <unistd.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char	str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
// 	ft_strcapitalize(str1);
// 	puts(str1);
// }

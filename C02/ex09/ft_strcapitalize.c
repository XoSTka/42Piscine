/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xostka <xostka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 20:03:22 by xostka            #+#    #+#             */
/*   Updated: 2026/07/16 23:44:03 by xostka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	is_alnum(char c)
{
	if (is_alpha(c) || is_numeric(c))
		return (1);
	return (0);
}

int	is_lower(char c)
{
	if (c < 'a' || c > 'z')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_alnum(str[i - 1]) && is_lower(str[i]))
			str[i] -= 32;
		else if (is_alnum(str[i - 1]) && !is_lower(str[i]) && is_alpha(str[i]))
			str[i] += 32;
		i++;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	word[] = " hellow World";
// 	char	word1[] = "HELLO";
// 	// char	num[] = "yAI";

// 	printf("%s\n", ft_strcapitalize(word));
// 	printf("%s\n", ft_strcapitalize(word1));
// 	// printf("%s", ft_strcapitalize(num));

// }

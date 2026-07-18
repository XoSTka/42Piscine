/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xostka <xostka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 19:10:59 by xostka            #+#    #+#             */
/*   Updated: 2026/07/16 20:00:11 by xostka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	word[] = "bruh";
// 	char	num[] = "ass";

// 	printf("%s\n", ft_strupcase(word));
// 	printf("%s", ft_strupcase(num));

// }

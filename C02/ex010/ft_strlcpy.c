/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xostka <xostka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 23:36:44 by xostka            #+#    #+#             */
/*   Updated: 2026/07/17 02:14:21 by xostka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	i;

	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}

	if (size > 0)
	{
		i = 0;
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}

	return (src_len);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	dest[50];
// 	char	src[50] = "duck";

// 	printf("%d", ft_strlcpy(dest, src, 4));
// 	printf("%s", dest);
// }

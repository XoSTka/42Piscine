/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xostka <xostka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 02:48:18 by xostka            #+#    #+#             */
/*   Updated: 2026/07/17 02:48:56 by xostka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int    d_len;
    unsigned int    s_len;
    unsigned int    i;

	s_len = 0;
	d_len = 0;
	i = 0;
	while (dest[d_len] != '\0' && d_len < size)
	    d_len++;
	while (src[s_len] != '\0')
	    s_len++;
	if (size <= d_len)
	    return (size + s_len);
	while (src[i] != '\0' && (d_len + i) < (size - 1))
	{
	    dest[d_len + i] = src[i];
	    i++;
	}
	dest[d_len + i] = '\0';
	return (d_len + s_len);
}
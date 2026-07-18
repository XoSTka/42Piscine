/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xostka <xostka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 02:46:36 by xostka            #+#    #+#             */
/*   Updated: 2026/07/17 02:46:54 by xostka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;


    if (to_find[0] == '\0')
    {
        return (str);
    }
    
    i = 0;

    while (str[i] != '\0')
    {
        j = 0;
    
    
        while (to_find[j] != '\0' && str[i + j] == to_find[j])
        {
            j++;
        }
        
    
        if (to_find[j] == '\0')
        {
            return (str + i);
        }
        i++;
    }

    return (0);
}
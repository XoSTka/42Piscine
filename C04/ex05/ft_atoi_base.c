/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xostka <xostka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 03:00:54 by xostka            #+#    #+#             */
/*   Updated: 2026/07/17 03:01:40 by xostka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int check_base(char *base)
{
    int i = 0;
    int j;

    if (base[0] == '\0' || base[1] == '\0')
        return (0);
    while (base[i] != '\0')
    {
        if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
            return (0);
        j = i + 1;
        while (base[j] != '\0')
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        i++;
    }
    return (i);
}

int get_value(char c, char *base)
{
    int i = 0;

    while (base[i] != '\0')
    {
        if (base[i] == c)
            return (i);
        i++;
    }
    return (-1);
}

int ft_atoi_base(char *str, char *base)
{
    int i = 0;
    int sign = 1;
    int result = 0;
    int base_len = check_base(base);

    if (base_len == 0)
        return (0);


    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;


    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }



    while (get_value(str[i], base) != -1)
    {
        result = (result * base_len) + get_value(str[i], base);
        i++;
    }

    return (result * sign);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xostka <xostka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 02:58:45 by xostka            #+#    #+#             */
/*   Updated: 2026/07/17 03:02:42 by xostka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     check_base(char *base)
{
    int i;
    int j;

    i = 0;
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

void    ft_putnbr_base(int nbr, char *base)
{
    int     base_len;
    long    n;

    base_len = check_base(base);
    if (base_len == 0)
        return ;
    n = nbr;
    if (n < 0)
    {
        ft_putchar('-');
        n = -n;
    }
    if (n >= base_len)
    {
        ft_putnbr_base(n / base_len, base);
    }
    ft_putchar(base[n % base_len]);
}
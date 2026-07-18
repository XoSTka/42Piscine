/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xostka <xostka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 04:01:53 by xostka            #+#    #+#             */
/*   Updated: 2026/07/13 14:48:41 by xostka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;
	int min;

	i = 0;
	while (i < size)
	{
		min = tab[i];
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < min)
			{
				temp = tab[j];
				tab[j] = tab[i];
				tab[i] = temp;
				min = tab[i];
			}
			j++;
		}
		i++;
	}
}

#include <stdio.h>

int main(void)
{
    int tab[] = {64, 34, 25, 12, 22, 11, 90};
    int size = 7;
    int i = 0;

    printf("Before sort: ");
    while (i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
    printf("\n");

    ft_sort_int_tab(tab, size);

    i = 0;
    printf("After sort:  ");
    while (i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
    printf("\n");

    return (0);
}
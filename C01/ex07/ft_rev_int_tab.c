/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xostka <xostka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 03:30:01 by xostka            #+#    #+#             */
/*   Updated: 2026/07/13 14:48:12 by xostka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}

#include <stdio.h>

int main(void)
{
    int tab[] = {1, 2, 3, 4, 5}; // สร้าง Array ของเรา
    int size = 5;
    int i = 0;

    // 1. พิมพ์ค่าก่อนสลับ
    printf("Before: ");
    while (i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
    printf("\n");

    // 2. เรียกฟังก์ชันของคุณ
    ft_rev_int_tab(tab, size);

    // 3. พิมพ์ค่าหลังสลับ
    i = 0;
    printf("After:  ");
    while (i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
    printf("\n");

    return (0);
}
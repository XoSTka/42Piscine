/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xostka <xostka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 03:11:13 by xostka            #+#    #+#             */
/*   Updated: 2026/07/10 03:15:52 by xostka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div_rslt;
	int	rmd_rslt;

	div_rslt = *a / *b;
	rmd_rslt = *a % *b;
	*a = div_rslt;
	*b = rmd_rslt;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmuto <hmuto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:13:40 by hmuto             #+#    #+#             */
/*   Updated: 2025/05/28 15:48:47 by hmuto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	void	*a;
	void	*b;
	int		std_ret;
	int		ft_ret;

	a = NULL;
	b = NULL;
	std_ret = printf("STD: [%p] [%p]\n", a, b);
	ft_ret = ft_printf("FT : [%p] [%p]\n", a, b);
	printf("STD returned: %d\n", std_ret);
	printf("FT  returned: %d\n", ft_ret);
	return (0);
}

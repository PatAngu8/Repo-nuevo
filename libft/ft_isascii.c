/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paangulo <paangulo@estudiante.42.es>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:06:17 by paangulo          #+#    #+#             */
/*   Updated: 2024/04/11 12:53:00 by paangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	int	ret;

	if (c >= 0 && c <= 127)
		ret = 1;
	else
		ret = 0;
	return (ret);
}

/*int main()
{
	int c = ñ;	
	int x;
	x = ft_isascii(c);
	printf ("%d", x);
	return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paangulo <paangulo@estudiante.42.es>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:50:35 by paangulo          #+#    #+#             */
/*   Updated: 2024/04/24 15:50:37 by paangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}

/*int main()
{
    int c = 66;
    int r;
    r = ft_tolower(c);
    printf("%d", r);
}*/

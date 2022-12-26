/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:48:02 by hwong             #+#    #+#             */
/*   Updated: 2022/10/09 09:59:44 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*temp;

	if (!str || !c)
		return (0);
	temp = (unsigned char *)str;
	while (n-- > 0)
		if (*(temp++) == c)
			return (temp);
	return (0);
}

/*
int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
printf("%s", (char *)ft_memchr(tab, -1, 7));
*/
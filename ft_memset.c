/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:48:59 by hwong             #+#    #+#             */
/*   Updated: 2022/10/03 11:48:59 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*temp;

	if (!str)
		return (NULL);
	temp = (unsigned char *)str;
	while (n-- > 0)
		*(temp++) = (char) c;
	return (str);
}

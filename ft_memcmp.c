/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:56:29 by hwong             #+#    #+#             */
/*   Updated: 2022/10/08 09:50:18 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	if (!str1 || !str2)
		return (0);
	while (n-- > 0)
		if (*((unsigned char *)str1++) != *((unsigned char *)str2++))
			return (*(unsigned char *)str1 - *(unsigned char *)str2);
	return (0);
}

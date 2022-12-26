/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:47:27 by hwong             #+#    #+#             */
/*   Updated: 2022/10/03 11:47:27 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	count;

	if (!dst || !src)
		return (0);
	count = 0;
	while (*src && count++ + 1 < n)
		*(dst++) = *(src++);
	if (count < n)
		*dst = '\0';
	while (*(src++))
		count++;
	return (count);
}

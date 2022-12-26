/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:54:52 by hwong             #+#    #+#             */
/*   Updated: 2022/10/06 16:36:07 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (str1[i + j] && (i + j) < n)
	{
		if (str2[j])
			return ((char *)str1 + i);
		if (str1[i++ + j] != str2[j])
		{
			j = 0;
			i++;
		}
		else
			j++;
	}
	if ((!str1[i + j] && !str2[j]) || ((i + j) == n && !str2[j]))
		return ((char *)str1 + i);
	return (NULL);
}

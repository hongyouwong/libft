/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:01:16 by hwong             #+#    #+#             */
/*   Updated: 2022/10/06 11:53:01 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*temp;

	if (!str || !c)
		return (NULL);
	temp = (char *)str;
	while (*temp != c)
		if (!(*(temp++)))
			return (NULL);
	return (temp);
}

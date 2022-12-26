/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:36:45 by hwong             #+#    #+#             */
/*   Updated: 2022/10/07 12:07:59 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t			i;
	char			*temp;

	i = 0;
	temp = (char *)str;
	while (*(temp++))
		i++;
	while (i-- > 0)
		if (*(temp--) == c)
			return (temp);
	return (NULL);
}

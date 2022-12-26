/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:39:30 by hwong             #+#    #+#             */
/*   Updated: 2022/10/07 17:57:06 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	in_string(char ch, const char *set)
{
	while (*set)
		if (ch == *(set++))
			return (1);
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*trimmed;
	int		i;
	int		len;
	int		count;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	count = 0;
	while (in_string(*(s1++), set))
		len--;
	s1--;
	while (in_string(s1[len - count - 1], set))
		count++;
	len -= count;
	if (!len)
		return (ft_strdup(""));
	trimmed = (char *) malloc (sizeof(char) * (len + 1));
	if (!trimmed)
		return (NULL);
	i = 0;
	while (len-- > 0)
		trimmed[i++] = *(s1++);
	trimmed[i] = '\0';
	return (trimmed);
}

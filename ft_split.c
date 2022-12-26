/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:34:18 by hwong             #+#    #+#             */
/*   Updated: 2022/10/06 12:34:18 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	in_string(char c, char *charset)
// {
// 	int	i;

// 	i = 0;
// 	while (charset[i])
// 	{
// 		if (c == charset[i])
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }

int	count_strings(const char *str, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

char	*ft_word(const char *str, char c)
{
	int		len_word;
	int		i;
	char	*word;

	i = 0;
	len_word = 0;
	while (str[len_word] && str[len_word] != c)
		len_word++;
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(const char *str, char c)
{
	char	**strings;
	int		i;

	i = 0;
	strings = (char **)malloc(sizeof(char *) * (count_strings(str, c)
				+ 1));
	while (*str != '\0')
	{
		while (*str && *str == c)
			str++;
		if (*str)
		{
			strings[i] = ft_word(str, c);
			i++;
		}
		while (*str && *str != c)
			str++;
	}
	strings[i] = 0;
	return (strings);
}

/*
int	word_count(char *str, char seperator)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == seperator)
			i++;
		if (str[i])
			count++;
		while (str[i] != seperator)
			i++;
	}
	return (count);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(const char *str, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	split = malloc((word_count((char *)str, c) + 1) * sizeof(char *));
	if (!str || !split)
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(str))
	{
		if (str[i] != c && index < 0)
			index = i;
		else if ((str[i] == c || i == ft_strlen(str)) && index >= 0)
		{
			split[j++] = word_dup(str, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
*/

/*
int	main(int argc, char **argv)
{
	int i = 0;
	char **output;
	if (argc == 3)
	{
		output = ft_split(argv[1], *argv[2]);
		while (output[i++])
			printf("%s\n", output[i]);
	}
	printf("\n");
	return (0);
}
*/
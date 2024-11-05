/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:51:06 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/10/27 14:51:08 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

static int	ft_strlen(char const *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

static void	*ft_empty(void)
{
	char	*empty;

	empty = (void *)malloc(1);
	if (empty == NULL)
		return (NULL);
	empty[0] = '\0';
	return ((void *)empty);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		len_str;
	char		*str;
	size_t		i;

	i = 0;
	if (!s)
		return (NULL);
	len_str = ft_strlen(s);
	if ((size_t)start >= len_str)
		return (ft_empty());
	if (len > len_str - start)
		len = len_str - start;
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int	main(void)
// {
// 	printf("%s", ft_substr("olaolaola", 4, 2));
// 	return (0);
// }
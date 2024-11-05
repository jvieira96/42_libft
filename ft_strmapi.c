/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:25:18 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/10/29 15:25:20 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// static  char	ft_toupper(unsigned int index, char	c)
// {
// 	if (c >= 97 && c <= 122)
// 	{
// 		c = c - 32;
// 	}
// 	return (c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	char	*str;
	int		i;

	len = 0;
	i = 0;
	while (s[len] != '\0')
		len++;
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[len] = '\0';
	return (str);
}

// int	main (void)
// {
// 	char const	*str = "olaola";

// 	printf("%s", ft_strmapi(str, ft_toupper));
// 	return (0);
// }

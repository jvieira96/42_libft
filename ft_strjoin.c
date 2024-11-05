/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:24:59 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/10/27 15:25:00 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	ft_strlen(char const *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

static char	*ft_strcpy(const char *s1, const char *s2, char *s3)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		s3[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		s3[j] = s2[i];
		i++;
		j++;
	}
	s3[j] = '\0';
	return (s3);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		len;

	len = ft_strlen(s1) + ft_strlen(s2);
	s3 = (char *) malloc (sizeof(char) * (len + 1));
	if (s3 == NULL)
		return (NULL);
	return (ft_strcpy(s1, s2, s3));
}

// int	main(int argc, char *argv[])
// {
// 	(void)argc;
// 	printf("%s", ft_strjoin(argv[1], argv[2]));
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:35:33 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/10/24 14:35:35 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*si;

	si = (const char *)s;
	i = 0;
	while (i < n)
	{
		if (si[i] == (char)c)
			return ((void *)&si[i]);
		i++;
	}
	return (NULL);
}

/*int main()
{
    size_t n;
    char c;
    const void *s;
    char    *adress;

    n = 8;
    s = "olaaaaaaaaaa";
    c = 'l';
    adress = ft_memchr(s, c, n);
    printf("%s", adress);
}*/
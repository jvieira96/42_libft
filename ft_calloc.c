/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:23:09 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/10/25 16:23:13 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*array;
	unsigned char	*parray;
	size_t			i;
	size_t			totalsize;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	totalsize = nmemb * size;
	array = (void *)malloc(totalsize);
	if (array == NULL)
		return (NULL);
	parray = (unsigned char *)array;
	while (i < nmemb * size)
	{
		parray[i] = 0;
		i++;
	}
	return (array);
}

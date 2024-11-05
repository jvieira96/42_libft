/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:15:42 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/10/23 12:45:13 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s2;

	i = 0;
	s2 = s;
	while (i < n)
	{
		*s2 = (unsigned char)c;
		s2++;
		i++;
	}
	return (s);
}

/*int main(void) {
    size_t n = 10;  // Tamanho do buffer
    char buffer[10];  // Declara um array de caracteres

    // Preenche o buffer com o caractere 'X'
    ft_memset(buffer, 'X', n);

    // Adiciona um caractere nulo ao final para imprimir como string
    buffer[n - 1] = '\0';

    // Imprime o conteúdo do buffer
    printf("Buffer após ft_memset: %s\n", buffer);

    // Para comparação, vamos usar a função memset da biblioteca padrão
    memset(buffer, 'O', n);  // Preenche o buffer com 'O'
    printf("Buffer após memset: %s\n", buffer);

    return 0;
}*/

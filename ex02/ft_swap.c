/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barbarag <barbarag@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 22:43:36 by barbarag          #+#    #+#             */
/*   Updated: 2026/08/15 22:47:06 by barbarag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *b;
	*b = *a;
	*a = aux;
}

/*int	main()
{
	int	*a;
	int	*b;

	*a = 16;
	*b = 2;
	ft_swap(a, b);
	printf("Contenido de a: %i\nContenido de b: %i\n", *a, *b);
}*/

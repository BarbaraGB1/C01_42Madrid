/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barbarag <barbarag@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 22:47:09 by barbarag          #+#    #+#             */
/*   Updated: 2026/08/15 22:49:37 by barbarag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux_a;
	int	aux_b;

	aux_a = *a / *b;
	aux_b = *a % *b;
	*a = aux_a;
	*b = aux_b;
}

/*int	main()
{
	int	*a;
	int	*b;

	*a = 16;
	*b = 2;
	ft_ultimate_div_mod(a, b);
	printf("Contenido de a: %i\nContenido de b: %i\n", *a, *b);
}*/

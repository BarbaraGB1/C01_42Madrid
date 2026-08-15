/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barbarag <barbarag@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 22:45:14 by barbarag          #+#    #+#             */
/*   Updated: 2026/08/15 22:46:57 by barbarag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main()
{
	int	a;
	int	b;
	int	*div;	
	int	*mod;	

	a = 16;
	b = 2;
	*div = 0;
	*mod = 0;
	ft_div_mod(a, b, div, mod);
	printf("Contenido de a: %i\nContenido de b: %i\nContenido de div: %i\n
	Contenido de mod: %i\n", a, b, *div, *mod);
}*/

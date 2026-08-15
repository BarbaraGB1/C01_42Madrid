/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barbarag <barbarag@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 23:16:01 by barbarag          #+#    #+#             */
/*   Updated: 2026/08/16 00:26:55 by barbarag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	i;
	int	j;

	i = 0;
	while (i <= (size / 2))
	{
		j = size - 1 - i;
		aux = tab [i];
		tab[i] = tab[j];
		tab[j] = aux;
		i++;
	}
}

/*int	main()
{
	int tab[] = {1,25,3,9,5,8,7};
	int	size;
	int	i;

	i = 0;
	size = 7;
	while (i <= (size - 1))
	{
		printf("Posición inicial %i: %i\n", i, tab[i]);
		i++;
	}
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i <= (size - 1))
	{
		printf("Posición final %i: %i\n", i, tab[i]);
		i++;
	}

	return (0);
}*/

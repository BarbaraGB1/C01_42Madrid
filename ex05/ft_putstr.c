/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barbarag <barbarag@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 23:01:01 by barbarag          #+#    #+#             */
/*   Updated: 2026/08/15 23:07:27 by barbarag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

/*int	main(void)
{
	char *str;

	str = "Que pasa con tu rollo";
	ft_putstr(str);
	write (1, "\n", 1);
	return (0);
}*/

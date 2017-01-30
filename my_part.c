/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_part.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drecours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 10:43:21 by drecours          #+#    #+#             */
/*   Updated: 2017/01/30 14:57:44 by drecours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include <stdio.h>
#include <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_create_map(int nb_tetri)
{
	char	*map;
	int		side;
	int		i;
	int		nb_caract;

	i = -1;
	side = ft_sqrt(nb_tetri * 4);
	nb_caract = side * (side + 1);
	if (!(map = (char *)ft_memalloc(sizeof(char) * (nb_caract + 1))))
		return (NULL);
	while (++i < nb_caract)
	{
		if (i == side || (i > side && (i - side) % (side + 1) == 0))
			map[i] = '\n';
		else
			map[i] = '.';
	}
	map[i] = '\0';
	return (map);
}

int		main(void)
{
	printf("%s", ft_create_map(26));
	return (0);
}

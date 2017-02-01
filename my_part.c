/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_part.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drecours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 10:43:21 by drecours          #+#    #+#             */
/*   Updated: 2017/01/30 15:10:50 by drecours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"

char	*ft_create_map(char *map, int nb_caract, int side)
{
	int		i;

	i = -1;
	while (++i < nb_caract)
	{
		if (i == side || (i > side && (i - side) % (side + 1) == 0))
			map[i] = '\n';
		else
			map[i] = '.';
	}
	return (map);
}

bool	ft_backtrack(char **map, int nb_caract, int position, tetri)
{
	if (dernier tetri est placé ) // tetri actuel n'existe pas
		return true;
	
	while (position != nb_caract)
		si tetri actuel placable
			on le place;
			si ft_backtrack (**map, nb_caract, position++, tetri +1  (tetri suivant))
				return true;
			remettre des points la ou on avait placé la pièce;
		i++;
	return false;
}

char	*ft_complete_map(int nb_#, int side)
{
	char	*map;
	int		side;
	int		nb_caract;
	
	side = ft_sqrt(nb_tetri * 4);
	nb_caract = side * (side + 1);
	if (!(map = (char *)ft_memalloc(sizeof(char) * (nb_caract + 1))))
		return (NULL);
	map = ft_create_map(map, nb_caract, side);
	while (ft_backtrack(*map, nb_caract, 0) == false)
	{
		side++;
		free map;
		if (!(map = (char *)ft_memalloc(sizeof(char) * ((side * (side + 1)) + 1))))
			return (NULL);
		map = ft_create_map(map);
	}
	ft_putstr(map);
}

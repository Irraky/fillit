/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drecours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 10:15:22 by drecours          #+#    #+#             */
/*   Updated: 2017/01/30 14:25:14 by drecours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int  nb_hashtags)
{
	int		result;

	result = 1;
	while ((result * result) < (nb_hashtags))
		result++;
	return (result);
}
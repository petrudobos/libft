/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rand.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedobos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/17 17:51:34 by pedobos           #+#    #+#             */
/*   Updated: 2017/12/17 17:52:44 by pedobos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_rand(unsigned int seed, int min, int max)
{
	seed = seed * 1103515245 + 12345;
	seed = (seed / 65536) % 32768;
	seed = seed % (max - min + 1) + min;
	return (seed);
}

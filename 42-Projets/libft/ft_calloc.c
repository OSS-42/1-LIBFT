/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:53:26 by ewurstei          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/04/07 10:23:39 by ewurstei         ###   ########.fr       */
=======
/*   Updated: 2022/04/05 16:05:07 by ewurstei         ###   ########.fr       */
>>>>>>> ebb78a9a3f990082ccfa465edf45f02570a9a6e6
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

<<<<<<< HEAD
=======
	if (count == NULL || size == NULL)
		return (NULL);
>>>>>>> ebb78a9a3f990082ccfa465edf45f02570a9a6e6
	mem = malloc(count * size);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, size * count);
	return (mem);
}

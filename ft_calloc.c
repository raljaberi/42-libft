/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raljaber <raljaber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:33:10 by raljaber          #+#    #+#             */
/*   Updated: 2023/12/22 11:43:06 by raljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	void	*array;

	if (element_size != 0 && num_elements > (SIZE_MAX / element_size))
		return (NULL);
	array = malloc(num_elements * element_size);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, (num_elements * element_size));
	return (array);
}

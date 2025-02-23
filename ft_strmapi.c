/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raljaber <raljaber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 17:32:53 by raljaber          #+#    #+#             */
/*   Updated: 2023/12/18 15:32:15 by raljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	length;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	length = ft_strlen(s);
	result = malloc(sizeof(char) * (length + 1));
	if (!result)
		return (NULL);
	while (i < length)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

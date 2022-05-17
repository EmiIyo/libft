/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiscan <eiscan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:16:42 by eiscan            #+#    #+#             */
/*   Updated: 2022/03/14 17:16:45 by eiscan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	char			*src1;
	char			*dst1;

	i = 0;
	src1 = (char *)src;
	dst1 = (char *)dst;
	if (!dst && !src)
		return (NULL);
	while (n > i)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst);
}

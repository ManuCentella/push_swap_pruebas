/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcentell <mcentell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:12:27 by mcentell          #+#    #+#             */
/*   Updated: 2023/12/01 11:32:42 by mcentell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			cur;

	str = (unsigned char *)s;
	cur = 0;
	while (cur < n)
	{
		if (str[cur] == (unsigned char)c)
			return ((void *)&str[cur]);
		cur++;
	}
	return (NULL);
}

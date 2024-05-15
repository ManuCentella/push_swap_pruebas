/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcentell <mcentell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:56:46 by mcentell          #+#    #+#             */
/*   Updated: 2023/12/18 14:28:28 by mcentell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*elem;

	if (alst != NULL && *alst != NULL)
	{
		elem = *alst;
		elem = ft_lstlast(*alst);
		elem->next = new;
		return ;
	}
	*alst = new;
}

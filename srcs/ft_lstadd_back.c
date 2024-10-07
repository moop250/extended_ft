/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlibine <hlibine@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:56:22 by hlibine           #+#    #+#             */
/*   Updated: 2024/10/07 18:19:12 by hlibine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extended_ft.h"

void	ft_lstadd_back(t_list **lst, t_list *new_lst)
{
	if (!*lst)
		*lst = new_lst;
	else
		ft_lstlast(*lst)->next = new_lst;
	return ;
}

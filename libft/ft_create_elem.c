/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 21:30:31 by vifonne           #+#    #+#             */
/*   Updated: 2018/12/18 11:40:52 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_create_elem(char *data, int len)
{
	t_list	*new;

	if (!(new = (t_list*)malloc(sizeof(t_list))))
		exit(0);
	new->data = data;
	new->len = len;
	new->next = NULL;
	return (new);
}

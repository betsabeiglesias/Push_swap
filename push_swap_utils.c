/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beiglesi <beiglesi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:58:17 by beiglesi          #+#    #+#             */
/*   Updated: 2024/03/20 13:05:04 by beiglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void error(int error)
{
	if(error == NO_ARGS)
	{
		ft_printf("Error\nNo Arguments");
		exit(EXIT_FAIL);
	}
	else if(error == STDR_ERROR)
		exit(EXIT_FAIL);
}
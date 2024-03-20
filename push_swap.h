/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beiglesi <beiglesi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 09:18:17 by beiglesi          #+#    #+#             */
/*   Updated: 2024/03/20 12:42:10 by beiglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include "lib/ft_printf/ft_printf.h"
# include "lib/libft/libft.h"

# define STDR_ERROR 1
# define EXIT_FAIL 1
# define EXIT_SUCCESS 0
# define NO_ARGS 0
# define TRUE 1
# define FALSE 0
# define INT_MIN -2147483648
# define INT_MAX 2147483647
typedef struct s_pslist
{
	int 	size;
	struct s_node	*first;
	struct s_node	*last;
	struct s_node	*cheapest;
}					t_pslist;

typedef struct s_node
{
	int	content;
	int	position;
	struct s_node *next;
	struct s_node *prev;
}				t_node;


/*main.c*/
void	read_params(int argc, char **argv);
void	create_stack(char **str);
int 	error_notnumber (char *str);

/* push_swap_utils.c*/
void error(int error);


# endif
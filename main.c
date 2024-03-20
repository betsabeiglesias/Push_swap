/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beiglesi <beiglesi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:19:35 by beiglesi          #+#    #+#             */
/*   Updated: 2024/03/20 13:03:19 by beiglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	//t_list *stack_a;
	t_list *stack_b;

	//stack_a = read_params(argc, argv);
	read_params(argc, argv);
	stack_b = NULL;

}


void	check_params(int argc, char **argv)
{
	char **args;
	int i;
	//t_list *stack;

	if(argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		args = argv;
	}
	while(args[i])
	{



	}


}

void	create_stack(char **str)
{
	t_list *list;


	if(error_notnumber(str))
		return(1);
	else
		ft_printf("va benne");

	/*list = NULL;
	list = malloc(sizeof(t_list));
	if(!list)
		error(STDR_ERROR);
	list->first = NULL;
	list->size = 0;
	while(*numbers)
	{
		if(!list->first)*/

}

int error_notnumber (char *str)
{
	if(*str != '+' || *str != '-' || (*str <= '0' && *str >= '9'))
		return(1);
	if(*str == '+' || *str == '-' && (!(str[1] >= '0' && str[1] <='9')))
		return(1);
	while(*str++)
	{
		if(!(str[1] >= '0' && str[1] <='9'))
			return(1);
	}
	return(0);
}

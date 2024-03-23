/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beiglesi <beiglesi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:19:35 by beiglesi          #+#    #+#             */
/*   Updated: 2024/03/23 14:18:59 by beiglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_list *stack_a;
	t_list *stack_b;


	stack_a = handle_params(argc, argv);

	if(argc < 2)
		error(NO_ARGS);
	else if(argc == 2)
		argv = ft_split(argv[1], ' ');
	make_list()
	
}

t_pslist *handle_params(int argc, char **argv)
{
	t_pslist	*list;
	char		**args;

	if(argc < 2)
		error(NO_ARGS);
	else if(argc == 2)
	{
		args = ft_split(argv[1], ' ');
		list = create_stack(args);
		/*HAY QUE FREE ARGS*/
	}
	else
		create_stack(argv + 1);
	return(list);
}

t_pslist *create_stack(char **str)
{
	t_pslist *stack;

	stack = NULL;
	stack = malloc(sizeof(t_pslist));
	if(!stack)
		return(NULL);
	stack->first = NULL;
	stack->last = NULL;
	stack->size = 0;
	while(*str)
	{
		if(!stack->first = NULL)
			ps_newnode(stack, )


	}
	
	

}

void ps_newnode(t_pslist *stack, int content)
{
	t_list	*node;
	
	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->content = content;
	if(!stack->first)
	{
		node->next = NULL;
		node.

	return (list);
}


}


/* OK OK OK en principio no la uso */
void	check_params(int argc, char **argv)
{
	t_pslist *list;
	char **args;
	int i;
	i = 0;
	args = NULL;
	
	if(argc < 2)
		error(NO_ARGS);
	else if(argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		args = argv;
	}
	while(args[i])
	{
		if(error_notnumber(args[i]))
			ft_printf("error en argumentos\n");
		i++;
	}
}
int error_notnumber(char *str)
{
	
	if(*str == '\0')
		return(1);
	if(*str != '+' && *str != '-' && !ft_isdigit(*str))
		return(1);
	str++;
	while(*str != '\0')
	{
		if(!ft_isdigit(*str))
			return(1);
		str++;
	}
	return(0);
}




/*void	create_stack(char **str)
{
	t_list *list;


	if(error_notnumber(str))
		return(1);
	else
		ft_printf("va benne");

	list = NULL;
	list = malloc(sizeof(t_list));
	if(!list)
		error(STDR_ERROR);
	list->first = NULL;
	list->size = 0;
	while(*numbers)
	{
		if(!list->first)

}
*/

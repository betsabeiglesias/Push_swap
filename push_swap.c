/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beiglesi <beiglesi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:54:36 by beiglesi          #+#    #+#             */
/*   Updated: 2024/03/20 12:39:31 by beiglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_list *stack_a;
	t_list *stack_b;

	stack_a = read_params(argc, argv);
	stack_b = NULL;

	

}


t_list read_params(int argc, char **argv)
{
	char **numbers;
	t_list list;

	if(argc == 1)
	{
		ft_printf("Error\nNo args");
		error(NO_ARGS);
	}
	else if(argc == 2)
	{
		numbers = ft_split(argv[1], ' ');

		list = create_stack(numbers);
		//HAY QUE FREE NUMBERS		

	}


}

int error_notnumber (char *str)
{
	if(*str != '+' || *str != '-' || (*str <= '0' && *str >= '9'))
		return(1);
	if(*str == '+' || *str == '-' && !(str[1] >= '0' && str[1] <='9'))
		return(1);
	while(*str++)
	{
		if(!(str[1] >= '0' && str[1] <='9'))
			return(1);
	}
	return(0);
}


void stack_init(t_list *stack_a, char **argv)
{



}






t_list create_stack(char **numbers)
{
	t_list *list;

	list = NULL;
	list = malloc(sizeof(t_list));
	if(!list)
		error(STDR_ERROR);
	list->first = NULL;
	list->size = 0;
	while(*numbers)
	{
		if(!list->first)
			ps_lstnew(list, )
// ME HE QUEDADO AQUÍ, AÑADIENDO A LA LISTA EL NÚMERO CHECKEADO POR ATOI
// QUE SEA UN INTEGER, QUE NO HAYA CARACTERES NO NÚMERICOS
// TENGO QUE AÑADIR A LA LISTA Y CHECKEAR QUE NO HAYA DUPLICIDAD

	}
	
	
	




}

int ft_atoi_ps(char *str, int *flag)
{
	int i;
	int sign;
	long num;

	i = 0;
	sign = 1;
	while(str[i] == ' ' || str[i] > 9 && str[i] < 13);
		i++;
	if(str[i] == '+')
	 i++;
	else if(str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	if (str[i] != '\0' || ft_strlen(str) == 0 || (str[i] == '\0'\
	&& (str[i - 1] == '-' || str[i - 1] == '+')))
		*flag = FALSE;
	num = num * sign;
	check_nbr(num, flag);
	return (num);
}

void	check_nbr(int num, int flag)
{	
	if(flag == FALSE || (num < INT_MIN && num > INT_MAX))
		error(STDR_ERROR);
}

t_list	*ps_lstnew(t_list *list, int content)
{
	t_node	*node;
	int		nb;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->content = content;
	if(!list->first)
	{
		node->next = node;
		node->prev = node;
		list->first = node;
		list->last = node;
	}
	else
	{
		node->next = list->first;
		node->prev = list->last;
		list->last->next = node;
		list->first = node;
		node->next->prev = node;
	}	
	list->size++;
}
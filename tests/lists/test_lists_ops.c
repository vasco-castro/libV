/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lists_ops.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:53:00 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/16 17:53:00 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

static void	del_content(void *content)
{
	free(content);
}

int	test_ft_lstnew(void)
{
	t_list	*node;
	char	*str;

	str = ft_strdup("Hello");
	node = ft_lstnew(str);
	if (!node || ft_strcmp((char *)node->content, "Hello") != 0)
	{
		free(str);
		free(node);
		return (TEST_FAIL);
	}
	free(str);
	free(node);
	return (TEST_PASS);
}

int	test_ft_lstadd_front(void)
{
	t_list	*list;
	t_list	*node;

	list = NULL;
	node = ft_lstnew(ft_strdup("World"));
	ft_lstadd_front(&list, node);
	node = ft_lstnew(ft_strdup("Hello"));
	ft_lstadd_front(&list, node);
	if (ft_strcmp((char *)list->content, "Hello") != 0)
	{
		ft_lstclear(&list, del_content);
		return (TEST_FAIL);
	}
	ft_lstclear(&list, del_content);
	return (TEST_PASS);
}

int	test_ft_lstadd_back(void)
{
	t_list	*list;
	t_list	*node;
	t_list	*last;

	list = NULL;
	node = ft_lstnew(ft_strdup("Hello"));
	ft_lstadd_back(&list, node);
	node = ft_lstnew(ft_strdup("World"));
	ft_lstadd_back(&list, node);
	last = ft_lstlast(list);
	if (ft_strcmp((char *)last->content, "World") != 0)
	{
		ft_lstclear(&list, del_content);
		return (TEST_FAIL);
	}
	ft_lstclear(&list, del_content);
	return (TEST_PASS);
}

int	test_ft_lstsize(void)
{
	t_list	*list;
	t_list	*node;

	list = NULL;
	node = ft_lstnew(ft_strdup("1"));
	ft_lstadd_back(&list, node);
	node = ft_lstnew(ft_strdup("2"));
	ft_lstadd_back(&list, node);
	node = ft_lstnew(ft_strdup("3"));
	ft_lstadd_back(&list, node);
	if (ft_lstsize(list) != 3)
	{
		ft_lstclear(&list, del_content);
		return (TEST_FAIL);
	}
	ft_lstclear(&list, del_content);
	return (TEST_PASS);
}

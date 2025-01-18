#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *curr;
	t_list *tmp;

	if (!lst || !del)
		return ;
	curr = *lst;
	while (curr)
	{
		tmp = curr;
		curr = curr -> next;
		del(tmp -> content);
		free(tmp);
	}
	*lst = NULL;
}

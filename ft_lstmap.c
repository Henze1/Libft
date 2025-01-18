#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*curr;
	t_list	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	curr = NULL;
	while (lst)
	{
		tmp = ft_lstnew((*f)(lst -> content));
		if (!tmp)
		{
			ft_lstclear(&curr, del);
			return (NULL);
		}
		ft_lstadd_back(&curr, tmp);
		lst = lst -> next;
	}
	return (curr);
}

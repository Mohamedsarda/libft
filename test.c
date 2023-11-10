#include <stdlib.h>
#include "libft.h"

void ft_del(void *content) {
    if (content) {
        free((char *)content);
    }
}

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
  if(!lst)
    return ;
  if (del)
    del(lst->content);
  free(lst);
}

int main()
{
    char *s = "te";
    t_list *arr1 = (t_list *)malloc(sizeof(t_list));
    // t_list *arr2 = (t_list *)malloc(sizeof(t_list));
    // t_list *arr3 = (t_list *)malloc(sizeof(t_list));

    arr1->content = s;
    arr1->next = NULL;
    //
    // arr2->content = s;
    // arr2->next = arr3;
    printf("str = %s\n", arr1->content);
    // //
    // arr3->content = s;
    // arr3->next = NULL;
    ft_lstdelone(arr1, ft_del);
    printf("str 2 = %s\n", arr1->content);
}

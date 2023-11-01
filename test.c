#include "libft.h"

int main()
{
    char **str;
    str = ft_split("kjfjksjd,difuhk,fikj.dosahdoiadho", '.');
    printf("%s \n", str[0]);
    printf("%s \n", str[1]);
    printf("%s \n", str[2]);
}
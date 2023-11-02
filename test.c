#include "libft.h"
#include <strings.h>

int main()
{
    char dst[] = "01234, World!";
    char *str = "Hello, World!";
	// // printf("mine  %s \n",ft_memmove(dst, str, 2));
	printf("-->   %s \n",memmove(dst, str, 2));
}

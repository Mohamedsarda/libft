#include "libft.h"
#include <strings.h>

int main() {
  	char *s = "split  ||this|for|me|||| |!|";
    int i = 0;
    char **result = ft_split(s, '|');
	while(result[i] != NULL)
	{
		printf("%s \n", result[i]);
		i++;
	}
  return 0;
}

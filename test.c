#include "libft.h"

int main()
{
	char **str;
	str = ft_split("qwe.reqwr.med.asdasd", '.');
	printf("%s \n", str[0]);
	printf("%s \n", str[1]);
	printf("%s \n", str[2]);
	printf("%s \n", str[3]);
	printf("%s \n", str[4]);
}

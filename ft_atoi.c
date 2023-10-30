#include "libft.h"

int ft_atoi(const char *str)
{
  int               i;
  unsigned long int num;
  int               is_p;

  i = 0;
  num = 0;
  is_p = 1;
  while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
    i++;
  if (str[i] == '-')
  {
    is_p = -1;
    i++;
  }
  else if (str[i] == '+')
    i++;
  while(ft_isdigit(str[i]))
  {
    num = num * 10 + (str[i] - '0');
    i++;
  }
  return (num * is_p);
}

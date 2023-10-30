#include "libft.h"

char  *ft_strdup(const char *s1)
{
  int i;
  char *dst;

  i = ft_strlen(s1);
  dst = (char *)malloc(i + 1);
  dst[i] = '\0';
  i--;
  while (i >= 0)
  {
    dst[i] = s1[i];
    i--;
  }
  return (dst);
}

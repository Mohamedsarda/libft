#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
  size_t  i;
  char *dst;

  dst = (char *)malloc(len + 1);
  if (!dst)
    return (NULL);
  i = 0;
  while ((i < len) && s[start])
  {
    dst[i] = s[start];
    i++;
    start++;
  }
  dst[i] = '\0';
  return (dst);
}

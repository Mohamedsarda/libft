#include "libft.h"

char  *ft_strjoin(char const *s1, char const *s2)
{
  int i;
  int j;
  int tt_len;
  char *dst;

  tt_len = ft_strlen(s1) + ft_strlen(s2);
  i = 0;
  dst = (char *)malloc(tt_len + 1);
  if (!dst)
    return (NULL);
  while (s1[i])
  {
    dst[i] = s1[i];
    i++;
  }
  j = 0;
  while (s2[j])
  {
    dst[i] = s2[j];
    i++;
    j++;
  }
  dst[i] = '\0';
  return (dst);
}

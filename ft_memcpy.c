#include "libft.h"
//resctrict means that dst and src can't point to the same memory location
void  *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
  size_t  i;

  i = 0;
  if (!dst && !src)
    return  (NULL);
  while (i < n)
  {
    ((char *)dst)[i] = ((char *)src)[i];
    i++;
  }
  return (dst);
}
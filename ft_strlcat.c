#include "libft.h"

size_t  ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
  size_t  dstLen;
  size_t  i;

  i = 0;
  dstLen = ft_strlen(dst);
  if(!dst)
    return (ft_strlen(src));
  if(dstsize >= 0)
  {
    while(src[i] && (i < dstsize))
    {
      dst[dstLen] = src[i];
      i++;
      dstLen++;
    }
    dst[dstLen] = '\0';
  }
  return (ft_strlen(dst));
}

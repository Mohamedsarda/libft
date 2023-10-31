#include "libft.h"

int ft_count_words(char *str)
{
  int wordCount;
  int is_word;
  int i;
  int j;

  is_word = 0;
  wordCount = 0;
  i = 0;
  while (str[i])
  {
    if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
      is_word = 0;
    else if (!is_word)
    {
      wordCount++;
      is_word = 1;
    }
    i++;
  }
  return (wordCount);
}

int ft_word_len(char *str, char c)
{
  int i;

  i = 0;
  while (str[i] && str[i] != c)
    i++;
  return (i);
}

char *ft_word(char *str, char c)
{
  int i;
  int len;
  char *dst;

  len = ft_word_len(str, c);
  i = 0;
  dst = (char *)malloc(len + 1);
  if(!dst)
    return (0);
  while(i < len)
  {
    dst[i] = str[i];
    i++;
  }
  dst[i] = '\0';
  return (dst);
}

char **ft_split(char const *s, char c)
{
  int words;
  char **dst;
  int i;
  int j;

  words = ft_count_words(s);
  dst = (char **)malloc((words + 1) * sizeof(char *));
  i = 0;
  j = 0;
  while (*s)
  {
    dst[j] = ft_word(s , c);
    while (*s != c)
    {

      *s++;
    }
    *s++;
    j++;
  }
}

int main()
{
  printf("%d", ft_split("med,haha,test", ','));
}

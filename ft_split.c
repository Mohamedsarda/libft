#include "libft.h"

static int wordsCounter(char *str, char c)
{
    int i = 0;
    int words = 0;
    int is_word = 0;

    while (str[i])
    {
        if(str[i] == c)
            is_word = 0;
        else if(!is_word)
        {
            words++;
            is_word = 1;
        }
        i++;
    }
    return (words);
}

static int wordLen(char *str, char c, int i)
{
    int len = 0;

    while(str[i] && str[i] != c)
    {
        len++;
        i++;
    }
    return (len);
}

static char *ft_putword(char *str, char c, int i)
{
    int j = 0;
    int len = 0;
    char *dst;
   
    len = wordLen(str, c, i);
    dst = (char *)malloc(len * sizeof(char) + 1);
   
    while(str[i] != c && j < len)
    {
        dst[j] = str[i];
        j++;
        i++;
    }
    dst[j] = '\0';
    return (dst);
}

char    **ft_split(char const *s, char c)
{
    char **dst;
    int words;
    int i;
    int j;

    i = 0;
    j = 0;
    words = wordsCounter(s, c);
    dst = (char **)malloc(words * sizeof(char *) + 1);
    if(!dst)
        return (NULL);
    while(j < words)
    {
        while(s[i] == c)
            i++;
        dst[j] = ft_putword(s, c , i);
        j++;
        // i = wordLen(s, c, i);
    }
    return (dst);
}
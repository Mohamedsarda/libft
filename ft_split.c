#include "libft.h"

static int wordsCounter(char const *str, char c)
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

static int wordLen(char const *str, char c)
{
    int i = 0;

    // printf("[%d]\n", *i);
    while(str[i] && str[i] != c)
        i++;
    return (i);
}

static char **ft_putword(char const *str, char c, int words, char **dst)
{
    int i = 0;
    int len = 0;
    int j;
    
    while(i < words)
    {
        while(*str == c)
            str++;
        len = wordLen(str, c);
        dst[i] = (char *)malloc(len * (char) + 1);
        j = 0;
        while(j < len)
            dst[i][j++] = *str++;
        dst[i][j] = '\0';
        i++;
    }
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
    dst = ft_putword(s, c , words, dst);
    return (dst);
}

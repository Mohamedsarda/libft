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

char    **ft_split(char const *s, char c)
{
    char **dst;
    int words;
    int start;
    int i;
    int j;

    start = 0;
    i = 0;
    j = 0;
    words = wordsCounter(s, c);
    dst = (char **)malloc(words * sizeof(char *) + 1);
    if(!dst)
        return (NULL);
    while(i <= words)
    {}
    return (dst);
}
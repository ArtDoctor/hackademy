#include <stdlib.h>
char *ft_strnstr(const char *str1, const char *str2, size_t l)
{
    size_t i;
    size_t j;
    if (str2[0] == '\0')
        return ((char *)str1);
    j = 0;
    while (j < l && str1[j])
    {
        i = 0;
        while (j < l && str2[i] && str1[j] && str2[i] == str1[j])
        {
            ++i;
            ++j;
        }
        if (str2[i] == '\0')
            return ((char *)&str1[j - i]);
        j = j - i + 1;
    }
    return (0);
}
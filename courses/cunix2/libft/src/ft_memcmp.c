#include <stdlib.h>
int ft_memcmp(const void *str1, const void *str2, size_t l){
    unsigned const char *p = str1;
    unsigned const char *q = str2;
    int c = 0;
    if (str1 == str2)
    {
        return c;
    }
    while (l > 0)
    {
        if (*p != *q)
        {
            c = (*p >*q)?1:-1;
            break;
        }
        l--;
        p++;
        q++;
    }
    return c;
}
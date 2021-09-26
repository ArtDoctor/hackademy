#include <stdlib.h>
void *ft_memcpy(void *str1, const void *str2, size_t l)
{
    if(str1==NULL||str2==NULL)return NULL;
    int cur=0;
    char *d = str1;
    const char *s = str2;
    while (l>0){
        l--;
        d[cur] = s[cur];
        cur++;
    }
    return str1;
}
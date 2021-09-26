#include <stdlib.h>
char *ft_memset(void *str, int n, size_t l){
    char* p=(char*)str;
    int cur=0;
    while(l>0)
    {
        l--;
        p[cur] = (char)n;
        cur++;
    }
    return str;
}
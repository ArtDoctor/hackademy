#include <stdlib.h>
void ft_striter(char *str, void (*f)(char *)){
    int count=0;int cur = 0;
    while(str[count]!='\0')
    {
        count++;
    }
    for(cur=0;cur<count;cur++){
        f(&str[cur]);
    }
}
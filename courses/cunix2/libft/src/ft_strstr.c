#include <stdlib.h>

char *my_strstr(char *str1,char *str2){
    char *a;
    char *b = (char *)str2;

    b = (char *)str2;

    if (*b == 0) {
        return (char*)str1;
    }

    for ( ; *str1 != 0; str1 += 1) {
        if (*str1 != *b) {
            continue;
        }

        a = (char *)str1;
        while (1) {
            if (*b == 0) {
                return (char*)str1;
            }
            if (*a++ != *b++) {
                break;
            }
        }
        b = (char *)str2;
    }

    return (char*)NULL;
}

char *ft_strstr(const char *str1,const char *str2){
    return my_strstr((char *)str1, (char *)str2);
}
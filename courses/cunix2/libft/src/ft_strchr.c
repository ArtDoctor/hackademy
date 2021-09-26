#include <stdlib.h>

char *ft_strchr(const char *str, int n){
    char ch;
	ch = n;
	for (;; ++str) {
		if (*str == ch)
			return ((char *)str);
		if (*str == '\0')
			return (NULL);
	}
}
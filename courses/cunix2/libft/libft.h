#ifndef LIBFT_H
#define LIBFT_H
#include <stddef.h>
#include <stdlib.h>

//Day 1
void ft_bzero(void *s, unsigned int l);
char *ft_strchr(const char *str, int n);
int ft_isalpha(int n);
int ft_isdigit(int n);
int ft_isascii(int n);
int ft_toupper(int n);
int ft_tolower(int n);

//Day 2
int ft_abs(int n);
div_t ft_div(int num, int denom);
char *ft_strstr(char *str1, char *str2);
char *ft_strnstr(const char *str1, const char *str2, size_t l);
char *ft_memset(void *str, int n, size_t l);
void *ft_memcpy(void *str1, const void *str2, size_t l);
int ft_memcmp(const void *str1, const void *str2, size_t l);

//Day 3
void ft_striter(char *str, void (*f)(char *));
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s);
char **ft_strsplit(char const *s, char c);

#endif

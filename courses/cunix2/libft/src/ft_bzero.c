void ft_bzero(void *c, unsigned int l){
    char * s = c;
    unsigned int i;
    for (i = 0; i < l; ++i)s[i] = '\0';
}
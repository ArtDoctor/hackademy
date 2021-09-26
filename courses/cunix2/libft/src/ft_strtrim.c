#include <stdlib.h>
char *ft_strtrim(char const *s){
    int countpre = 0, count = 0, countaf=0;
    while(s[countpre]==' '||s[countpre]=='\n'||s[countpre]=='\t')
    {
        countpre++;
    }
    while(s[count]!='\0')
    {
        count++;
    }
    if(countpre==count){
        char *res = (char*)malloc(1);
        res[0]='\n';
        return res;
    }
    countaf++;
    while((s[count-countaf]==' '||s[count-countaf]=='\n'||s[count-countaf]=='\t')&&count-countaf!=0)
    {
        countaf++;
    }
    countaf--;
    char *res =(char*) malloc(count-countpre-countaf+1);
    int k;
    
    for(k=countpre;k<count-countaf;k++){
        res[k-countpre]=s[k];
    }
    res[countpre-k]='\0';
    return res;
}
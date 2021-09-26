#include <stdlib.h>
char *ft_strjoin(char const *s1, char const *s2){
    int count1 = 0, count2=0, k;
    
    while(s1[count1]!='\0')
    {
        count1++;
    }
    while(s2[count2]!='\0')
    {
        count2++;
    }
    char *result =(char*) malloc(count1+count2+1);
    for(k=0;k<count1;k++)result[k]=s1[k];
    for(k = count1; k<count1+count2;k++){
        result[k]=s2[k-count1];
    }
    result[k]='\0';
    return result;
}
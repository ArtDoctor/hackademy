#include <stdio.h>
#include <stdlib.h>

void ft_strcpy(char dest[], const char source[])
{
    int i = 0;
    while (source[i]!='\0')
    {
        dest[i] = source[i];
        i++;
    } 
}

char **ft_strsplit(char const *s, char c){
    //char **res;
    //res = malloc(sizeof(char*) * (100));
    int count=0, cur=0, curr=0;
    while(s[count]!='\0'){
        count++;
    }
    char** res = (char**)malloc(100 * sizeof(char*));
    char *row = (char*)malloc(count*sizeof(char));
    char *roww;
    int k=0;
    while(k<=count){
        if(s[k]!=c&&s[k]!='\0'){
            row[curr]=s[k];
            curr++;
        }else{
            row[curr]='\0';
            free(roww);
            roww=(char*)malloc(curr*sizeof(char));
            for(int j = 0;j <= curr;j++)roww[j]=row[j];
            if(curr!=0){
                res[cur] = (char*)malloc(curr * sizeof(char));
                ft_strcpy(res[cur], roww);
                cur++;
            }
            curr=0;
        }
        k++;
    }
    char** fres=(char**)malloc((cur+1) * sizeof(char*));
    for(k=0;k<cur;k++){
        count=0;
        while(res[k][count]!='\0'){
            count++;
        }
        fres[k] = (char*)malloc((count+1) * sizeof(char));
        ft_strcpy(fres[k], res[k]);
    }
    return fres;
}
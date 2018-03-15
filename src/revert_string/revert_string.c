#include "revert_string.h"

void RevertString(char *str)
{
    int a =(sizeof(char) * (strlen(str)));
    char *temp = malloc(a);
    for (int i=0;i<a;i++)
    temp[a-i-1]=str[i];
    strcpy(str, temp);
    free(temp);
}


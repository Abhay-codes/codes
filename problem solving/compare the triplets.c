#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);

int main()
{
    int i;
    int a[3];
    int b[3];
    int c1=0;
    int c2=0;
    for(i=0;i<3;i++)
    {
        scanf("%d ", &a[i]);
    }

for(i=0;i<3;i++)
    {
        scanf("%d " ,&b[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            c1+=1;
        }
        else if(b[i]>a[i])
        {
            c2+=1;
        }
    }
    printf("%d %d ", c1,c2);
    return 0;
    }

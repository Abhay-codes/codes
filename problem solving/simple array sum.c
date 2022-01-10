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
int main ()
{
    int i,sum, k; 
    sum=0;
    int ch [1000];
    scanf("%d", &k);
    for (i=0;i<k;i++)
    {
        scanf("%d", &ch[i]);
        
    }
    for (i=0;i<k;i++)
    {
        sum=sum+ch[i];
    }
    printf("%d", sum);
    
}

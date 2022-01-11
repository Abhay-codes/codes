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
int main()
{
    long  ch[1000];
    int i, j , k ;
    long sum=0;
    scanf("%d\n", &k);
    for (i=0;i<k;i++)
    {
        scanf("%ld ", &ch[i]);
    }
    for (i=0;i<k;i++)
    {
        sum = sum + ch[i];
    }
    printf("%ld",sum);
}

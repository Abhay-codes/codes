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
    long long i, s1, s2, min, max;
    long long s3, s4;
    min = 1000000000000;
    max = 0;
    s1 = 0;
    s2 = 0;
    long long ar[5];
    for (i = 0; i < 5; i++)
    {
        scanf("%lld", &ar[i]);
    }
    for (i = 0; i < 5; i++)
    {
        if (min > ar[i])
        {

            min = ar[i];
        }
        if (max < ar[i])
        {
            max = ar[i];
        }
    }
    for (i = 0; i < 5; i++)
    {

        s1 = s1 + ar[i];

        s2 = s2 + ar[i];
    }
    s3 = s1 - max;
    s4 = s2 - min;
    printf("%lld %lld", s3, s4);
}

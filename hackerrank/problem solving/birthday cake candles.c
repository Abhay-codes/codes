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
    long i;
    long ar[1000000];
    long n;
    long max = 0;
    long count = 0;
    scanf("%d\n", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%ld", &ar[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        if (ar[i] == max)
        {
            count += 1;
        }
    }
    printf("%ld", count);
}

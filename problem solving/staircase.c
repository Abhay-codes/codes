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
    int n;
    int i, j;
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= n; j++)
        {
            if (j < i)
            {
                printf("%c", ' ');
            }
            else if (j >= i)
            {
                printf("%c", '#');
            }
        }
        printf("\n");
    }
}

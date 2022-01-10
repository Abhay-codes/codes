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
    int i;
    int h, m, s;
    char ch[2];
    scanf("%d:%d:%d", &h, &m, &s);
    for (i = 0; i < 2; i++)
    {
        scanf("%c", &ch[i]);
    }

    if (ch[0] == 'P')
    {
        if (h >= 1 && h < 12)
        {
            h = h + 12;
            printf("%02d:%02d:%02d", h, m, s);
        }
        else if (h == 12)
        {
            printf("%02d:%02d:%02d ", h, m, s);
        }
    }
    else if (ch[0] == 'A')
    {
        if (h == 12)
        {
            h = 0;
            printf("%02d:%02d:%02d ", h, m, s);
        }
        else
        {
            printf("%02d:%02d:%02d ", h, m, s);
        }
    }
}

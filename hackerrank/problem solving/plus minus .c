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
    int ch[1000];
    int i;
    int n;
    float div;
    float c1, c2, c3;
    c1 = 0;
    c2 = 0;
    c3 = 0;
    float a, b, c;
    scanf("%d\n", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &ch[i]);
    }
    for (i = 0; i < n; i++)
    {

        {

            if (ch[i] > 0)
                c1 += 1;
            else if (ch[i] < 0)
                c2 += 1;
            else if (ch[i] == 0)
                c3 += 1;
        }
    }
    a = c1 / n;
    b = c2 / n;
    c = c3 / n;
    printf("%f\n %f\n %f\n", a, b, c);
}

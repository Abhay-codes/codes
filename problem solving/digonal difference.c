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
    int i , j ;
    int ar[100][100];
    int n ;
    int s1=0,s2=0;
    int d ;
    int s , s3;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d", &ar[i][j]);
        }
        
    }
     for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if (i==j){
            s1=s1+ar[i][j];}
            s=i+j;
            if(s==n-1)
            {
                s2=s2+ar[i][j];
            }
        }
    }
        if (s2>s1)
        {
            s3=s2-s1;
        }
        else 
        {
            s3=s1-s2;
        }
        printf("%d", s3);
    }

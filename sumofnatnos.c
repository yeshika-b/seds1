#include <stdio.h>
#include "incbyfun.h"

int sumnat(int n)
{
    int i=1,r=0;
    while(i<=n)
    {
    r=incby(r,i);
    i++;
    }
    return r;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",sumnat(n));
    return 0;
}
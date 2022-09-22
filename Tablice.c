#include <stdio.h>

#define NR 10

//Program wypisuje NR kolejnych liczb w odwrotnej kolejności

int main_test()
{
    int a[NR];
    int i;
    
    for(i=0; i<NR; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=NR-1; i>=0; i--)
    {
        printf("%d ",a[i]);
    }    
    
    return 0;
}
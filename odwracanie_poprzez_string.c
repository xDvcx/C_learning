#include<stdio.h>

int main()
{
    char lan[51], wyj[51];
    int i=0, j=0;
    scanf("%s",lan);
    while(lan[i]!=0)
    {
        i++;
    }
    
    for(i-=1;i>=0;i--)
    {
        wyj[j]=lan[i];
        j++;
    }
    wyj[j]=0;
    
    printf("%s",wyj);

    return 0;
}
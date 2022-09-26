#include<stdio.h>

int main()
{
   char lan1[50], lan2[50];
   int i=0, j=0;
   
   scanf("%s",lan1);
   scanf("%s",lan2);
   
   while(lan1[i]!=0 || lan2[j]!=0)
   {
       if(lan1[i]!=0)
       {
           printf("%c",lan1[i]);
           i++;
       }
       
       if(lan2[j]!=0)
       {
           printf("%c",lan2[j]);
           j++;
       }
   }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int x;
    scanf("%d",&x);
    if(x==2)
    {
        printf("Prime");
        exit(0);
    }
    for(int i =2;i<=x/2;i++)
    {
        if(x%i==0)
        {printf("Not Prime");
        exit(0);}
    }
    printf("Prime");
       
    return 0;
}
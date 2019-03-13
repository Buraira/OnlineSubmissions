#include <stdio.h>

int main()
{
    int i,u;

    for(i=1, u=1; u!=11 ; i++)
    {
        if(i%2 == 0 && i%3 == 0 && i%5 == 0)
        {
            u++;
            printf("%d ",i);
        }

    }

//    printf("%d",i);
return 0;
}

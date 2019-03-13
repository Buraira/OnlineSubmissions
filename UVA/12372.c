#include <stdio.h>


int main()
{
    int T, L, W, H, i;

    scanf("%d",&T);

    for (i = 1; i <= T; i++)
    {
        scanf("%d %d %d", &L, &W, &H);


        if((1<L && L<20) && (1<W && W<20) && (1<H && H<20) )
        {
            printf("Case %d: good",i);
        }
        else
        {
             printf("Case %d: bad",i);
        }
    }

    return 0;
}

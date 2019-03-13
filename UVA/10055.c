#include <stdio.h>

int main()
{
	long long  h, o;
    long long d;

	while (scanf("\n%lld %lld",&h,&o) != EOF)
	{
	    d = h-o;

	    if (d < 0)
	    {
	        d = d*(-1);
	        printf("%lld\n",d);
        }
        else
        {
            printf("%lld\n",d);
        }




	}

	return 0;
}

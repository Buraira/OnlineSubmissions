#include <stdio.h>

int main()
{
	int v, t;
    int s;

	while (scanf("\n%d %d",&v,&t) != EOF)
	{
	    s = v * 2* t;
	    printf("%d\n", s);
	}

	return 0;
}

#include <iostream>

using namespace std;

int main()
{
	int i, j, k, l, m, n, o;

	l = 1;
	m = 0;

	while (scanf("%d %d",&i,&j) != EOF)
	{
		cout<<"\n";
		cout<<i<<" "<<j;
		if (i > j)
			swap(i,j);

		for(i; i <= j; i++)
		{
			n=i;
			for (n ; n != 1; )
			{
				if ((n%2) != 0)
					n = (3*n)+1;
				else
					n = n/2;
				l++;
			}
			if(l > m)
			{
				m = l;
			}
			l=1;
		}

		cout<<" " <<m << "\n" ;
		m = 0;

	}
	return 0;
}

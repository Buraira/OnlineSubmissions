#include <iostream>
#include <cstdio>

using namespace std;

int
main ()
{
  string type;
  int money, totalBalance = 0;
  int cases;

  cin >> cases;

  for (int n = 0; n < cases; n++)
    {
      std::cin >> type;

      if (type == "donate")
    	{
    	  cin >> money;
    	  totalBalance += money;
    	}
      else
	    std::cout << totalBalance << std::endl;
    }
  return 0;
}

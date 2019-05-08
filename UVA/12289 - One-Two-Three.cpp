#include <iostream>
#include <string>

using namespace std;

int main() {
	// your code goes here
	int t;
	string s;
	int c;
	
	cin >> t;
	
	while (t !=0)
	{
		cin >> s;
		if (s.length() == 5)
	    	cout << 3 << endl;
	    else
		{
			if(s[0] == 'o')
				c++;
			if(s[1] == 'n')
				c++;
			if(s[2] == 'e')
				c++;
			
			if (c >= 2)
				cout << 1 << endl;
			else
				cout << 2 << endl;
		}
		    c=0;
			t--;
	}
	
	return 0;
}

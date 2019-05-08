#include <iostream>
using namespace std;

int main() {
	
	int num_a, num_b, sum, carry;
	int c ;
	
	while (cin >> num_a >> num_b)
	{	
		if (num_a == 0 && num_b == 0)
			break;
			
		c = 0;	
		carry = 0 ;
		for (int i = 0; ; i++)
		{
			sum = (num_a%10) + ((num_b%10) + carry);
			
			if(sum > 9)
			{
				c++;
				carry = sum/10;
			}
			else
				carry = 0 ;
			
			num_a = num_a/10;
			num_b = num_b/10 ;
		
			if(num_a == 0 && num_b ==0)
				break;
		}
		
		if (c == 0)
			cout << "No carry operation." << endl;
		else if (c == 1)
			cout << c << " carry operation."<<endl;
		else 
			cout << c << " carry operations." << endl;
	}

	return 0;
}

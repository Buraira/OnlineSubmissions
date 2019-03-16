    #include <iostream>
    #include <math.h>
     
    using namespace std;
     
    int divTwo(int num)
    {
    	for (int i=0; ; i++)
    	{
    		if (num%2 == 0)
    		{
    			num/=2;
    		}
    	}
    	return num;
    }   
    
    int divThree(int num)
    {
    	for (int i=0; ; i++)
    	{
    		if (num%3 == 0)
    		{
    			num/=3;
    		}
    	}
    	return num;
    }   
    
    int divFive(int num)
    {
    	for (int i=0; ; i++)
    	{
    		if (num%5 == 0)
    		{
    			num/=5;
    		}
    	}
    	return num;
    }  
    
    int main()
    {
        int i,u;
    	int j = 0;
    	
        for(i=2, u=0; ; i++)
        {
        	j = divTwo(i) ;
        	
        	if(j > 1)
        	{
        		j = divThree(j);
        
        		if(j > 1)
        		{
        			j = divFive(j);
        			if (j > 1)
        				{continue;}
        			else
        			{ 
        				cout << i << " ";
        				u++;
        			}
        		}
        		else
        		{
        			cout << i << " ";
        			u++;
        		}
        	}
        	else
        	{
        		cout << i << " ";
        		u++;
        	}
        	if (u >1500)
        		break;
        }
     
       // cout << "The 1500'th ugly number is " << i;
    return 0;
    }

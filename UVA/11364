#include <iostream>

using namespace std;

int main()
{
   int n;
   int i = 0;
   int a[100000];
   
   int caseNo ;
   
   cin >> caseNo ;
   
   for (int m = 0 ; m < caseNo ; m++)
    {   
       cin >> n ;
       
       for (i = 0 ; i < n ; i++)
       {
           cin >> a[i];
       }
       
       for ( int j = 0 ; j < n ; j++)
       {
           for (int k = 0 ; k < n - j - 1 ; k++)
           {
               if (a[k] > a[k+1])
               {
                int temp = a[k];
                a[k] = a[k+1];
                a[k+1] = temp;
               }
            }
       }
       
       
       int total = 0;
       for (int j = 0 ; j < n ; j++)
       {
           if(j+1 < n)
           {int temp = a[j] - a[j+1];
           if (temp < 0)
            {temp = temp * -1;}
           
           total += temp;}
        }
        
        cout << total*2 <<"\n"; 
    }
   return 0;
}

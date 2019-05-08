#include <iostream>

using namespace std;

int main()
{
   int s1, s2 ,s3;
   int i = 0;
   int a[3];
   
   int caseNo ;
   
   cin >> caseNo ;
   
   for (int m = 0 ; m < caseNo ; m++)
    {   
       
       for (i = 0 ; i < 3 ; i++)
       {
           cin >> a[i];
       }
       
       for ( int j = 0 ; j < 3 ; j++)
       {
           for (int k = 0 ; k < 3 - j - 1 ; k++)
           {
               if (a[k] > a[k+1])
               {
                int temp = a[k];
                a[k] = a[k+1];
                a[k+1] = temp;
               }
            }
       }
        cout << "Case "<<m+1<<": " << a[1]<<"\n"; 
    }
   return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
	char str[1000], str1[1000];
	int i = 0;
	int j = 0;
    int count = 0;


	while(gets(str)!= '\0' )
	{
	    if (str[i] == '"')
	    {
	        count ++;
	        if(count == 1)
	        {
                str1[i] = '``';
	        }
	        else if (count == 2)
	        {
	            str1[i] = '"';
	            count=0;
	        }
	    }

	    else
            str1[i]=str[i];
	    i++;
    }
    str1[i] = '\0';
    printf ("%s", str1);
   	return 0;
}

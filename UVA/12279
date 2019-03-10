
37 lines (30 sloc) 669 Bytes
#include <iostream>

using namespace std;

int main()
{
    int emgoogleBal = 0;

    int number;
    int caseNo;

    for (int m = 0; ; m++)
    {

        int totalTreat = 0;
        int totalEvent = 0;
        cin >> caseNo;
        if (caseNo == 0)
            break;
        else
        {
            for (int i = 0; i < caseNo; i++)
            {
                cin >> number;
                if (number)
                    totalEvent++;
                else
                    totalTreat++;
            }
            emgoogleBal = totalEvent - totalTreat;

            cout << "Case " << m + 1 << ": " << emgoogleBal << "\n";
        }
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int K;
    int N, M;
    int x1, y1;

    for (int j = 0; ; j++)
    {
        cin >> K;
        if (K == 0)
            break;
        else
        {
            cin >> N >> M;
            for (int l = 0; l < K; l++)
            {

                cin >> x1 >> y1;
                if (x1 < N && y1 > M)
                    cout << "NO\n";
                else if (x1 > N && y1 > M)
                    cout << "NE\n";
                else if (x1 < N && y1 < M)
                    cout << "SO\n";
                else if (x1 > N && y1 < M)
                    cout << "SE\n";
                else
                    cout << "divisa\n";
            }
        }
    }
    return 0;
}

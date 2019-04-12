#include <iostream>
#include <queue>
#include <vector>
#include <array>

using namespace std;

int main()
{
    int v,e,i,j,n_edge,n1,n2;
    queue<int> q;
    n_edge = 0;
    cin >> v >> e;
    
    int ifRoot[v] = {0};
    int ifVisited[v] = {0};
    int child[v] = {0};
    int arr[v][v] = {0};
    
    for(i = 0; i<e; i++){
        cin >> n1 >> n2;
        arr[n1][n2] = 1;
        arr[n2][n1] = 1;
    }
    
    for (i = 0; i<v ; i++){
        
        if(ifVisited[i] == 0)
        {
            ifVisited[i] = 1;
            ifRoot[i] = 1;
            q.push(i);
        }
        for(j =0 ; j<v ;j++){
            
            if (ifVisited[j] == 0 && arr[i][j] == 1)    
            {
                ifVisited[j] = 1;
                n_edge++;
                q.push(j);
            }
        }
        child[i] = n_edge;
        n_edge = 0;
    }
    
    while (!q.empty()){
        
        int temp = 0;
        cout << q.front() << endl;
        temp = q.front();
        q.pop();
    }
    
    return 0;
}

///////// input
15
11
1 2 
1 3 
1 4 
2 5 
2 6
5 9
5 10
4 7 
4 8
7 11
7 12
5 9
5 10
4 7 
4 8
7 11
7 12

//////////output
0
1
2
3
4
5
6
7
8
9
10
11
12
13
14

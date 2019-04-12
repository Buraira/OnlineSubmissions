#include <iostream>
#include <queue>
#include <vector>
#include <array>

using namespace std;

int main()
{
    int v,e,i,j,t,n1,n2;
    queue<int> q;
    n_edge = 0;
    cin >> v >> e;
    
    int ifParent[v] = {0};
    bool ifVisited[v] = {false};
    bool colored[v] = {false};
    int arr[v][v] = {0};
    
    for(i = 0; i<e; i++){
        cin >> n1 >> n2;
        arr[n1][n2] = 1;
        //arr[n2][n1] = 1;
    }
     
    ifVisited[0] = true;
    ifParent[0] = 1;
    q.push(0);
    
	while(!q.empty()){
		t = q.front();
		cout<<t << " ";
		q.pop();
		colored[t] = true;
		
		for (j =0; j<v && arr[t][j] == 1; j++){	
			if (colored == false)    
		       colored[j] = true;
		    if(ifVisited[j] == false)
		    {	
		    	q.push(j);
		    	ifVisited[j] = true;
		    	parent[j] = t;
		    }
		}
    }
    
    while (!q.empty()){
        
        int temp = 0;
        cout << q.front() << endl;
        temp = q.front();
        q.pop();
    }
    
    return 0;
}

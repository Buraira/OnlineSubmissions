#include <iostream>
#include <queue>
#include <vector>
#include <array>
     
using namespace std;


// int initialize_graph(int ar, int v){

// }
  
// int bfs(int array[int v], int n){

// }
     
int main()
{
    int v,e,i,j,t,n1,n2;
    queue<int> q;
 
    cin >> v >> e;
    
    int ifParent[v] = {-1};
    int ifVisited[v] = {0};
    int colored[v] = {0};
    int arr[v][v] = {0};
 
    for(i = 0; i<e; i++){
        cin >> n1 >> n2;
        arr[n1][n2] = 1;
        arr[n2][n1] = 1;
    }
  
    ifVisited[0] = 1;
    ifParent[0] = 1;
    q.push(0);
     
 	while(!q.empty()){
  		t = q.front();
   		cout<<t << " ";
   		q.pop();
   		colored[t] = 1;
    
   		for (j = 0; j<v ; j++){	
   			
   			if(arr[t][j] == 1)
   			{
   				if (colored[j] == 0)    
    		       colored[j] = 1;
    		    if(ifVisited[j] == 0 )
    		    {	
    		    	q.push(j);
    		    	ifVisited[j] = 1;
    		    	ifParent[j] = t;
    		    }
   			}
   		}
    }
    
 return 0;
}   

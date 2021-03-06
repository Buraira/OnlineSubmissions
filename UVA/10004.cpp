#include <iostream>
#include <queue>
#include <vector>
#include <array>
     
    using namespace std;
   
    #define MAXV 1000
    
   // int v,e;
    int processed[MAXV+1];
    int discovered[MAXV+1];
    int parent[MAXV+1];
    int color[MAXV+1];
    int arr[MAXV+1][MAXV+1] ;
    
    bool bipartite ;
    int count = 0;
    
    void init (int v){
        int i;
        bipartite = true;
        for (i=0 ; i<v ; i++){
            processed[i] = discovered[i] = 0;
            parent[i] = -1;
        }
    }
  
    int complement(int color){
        if ( color == 1) return 2;
        if ( color == 2) return 1;
        
        return 0;
        
    }
    
    void process_edge(int x, int y){
        if (color[x] == color[y]){
            bipartite = false;
            cout << "NOT BICOLORABLE." << endl;
        }
        else
            count = 1;
            
        color[y] = complement(color[x]);
    }
    
    
    
    void bfs (int x, int v)
    {
        queue<int> q;
        int t,j;
        
        q.push(x);
        discovered[x] = 1;
     
        while(!q.empty()){
            t = q.front();
      
            processed[t] = 1;
            q.pop();
    
            for (j = 0; j<v ; j++){    
                
                if(arr[t][j] == 1)
                {
                    if (processed[j] == 0)    
                       process_edge(t,j);
                    if (bipartite == false)
                        break;
                    if(discovered[j] == 0 )
                    {    
                        q.push(j);
                        discovered[j] = 1;
                        parent[j] = t;
                    }
                }
            }
        }
    }
    
    
    int main()
    {
        int v,e;
        int i,j,t,n1,n2;
    
        
        while ( cin >> v){
                
                if (v != 0){
                cin >> e;
                init(v);
                bipartite = true;
               
                for (i = 0; i < v; i++)
                {
                    for (j = 0; j < v; j++){
                        
                        arr[i][j] = 0;
                    }
                }
             
                for (i =0 ; i <v ; i++)
                {
                    color[i] = 0;
                }
          
                for(i = 0; i<e; i++){
                    cin >> n1 >> n2;
                    arr[n1][n2] = 1;
                    arr[n2][n1] = 1;
                }
                
                for (i =0; i < v; i++ )
                {
                    if (discovered[i] == 0)
                    {
                        color[i] = 1;
                        bfs(i,v);
                        if (bipartite == false)
                            break;
                    }
                }
               
                if(bipartite == true)
                    cout << "BICOLORABLE."<< endl;
            }
            else
                break;
        }
    return 0;
}

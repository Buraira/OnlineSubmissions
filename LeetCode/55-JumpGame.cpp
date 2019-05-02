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
int times=0;
int entry_time[MAXV+1];
int exit_time[MAXV+1];
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
  
void dfs (int i,int v)
{
    discovered[i] = 1;
    times = times+1;
    entry_time[i] = times;
    cout << i << endl;
        
    for (int j = 0 ; j < v; j++){
        if (arr[i][j] == 1 && discovered[j] == 0){
            parent[j] = i;
            dfs(j,v);
        }
    }
    processed[i] = 1;
    exit_time[i] = times;
    times = times+1;
}
    
    
int main()
{
    //int v,e;
    int i,j,t,n1,n2;
    std::vector<int> v;

    v = {2,3,0,0,1};
    
    for (i = 0; ; i++){
        for (j = 0; j < v; j++){
                     
            arr[i][j] = 0;
        }
    }
             
    for(i = 0; i<v.size(); i++){
        if (v[i] != 0){
            for (int j = i+1; j<v[i] ; j++){
                arr[i][j] = 1;
            }
        }
    }
                
    //dfs(0,v);

    for (i = 0; i < v; i++){
        for (j =0 ;j < v; j++){
            cout << arr[i][j]<" ";
        } 
        cout << endl;
    }

    return 0;
}
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
    bool ret = false;
    int count = 0;
    
    void init (int v){
        int i;
       // bipartite = true;
        for (i=0 ; i<v ; i++){
            processed[i] = discovered[i] = 0;
            parent[i] = -1;
        }
    }
    
    bool dfs (int i,vector<int>& v)
    {
        discovered[i] = 1;
        times = times+1;
        entry_time[i] = times;
        
        //cout << i << endl;
        
        for (int j = 0 ; j < v.size(); j++){
          if (arr[i][j] == 1 && discovered[j] == 0){
              parent[j] = i;
             
              if(j == (v.size() - 1))
              { 
                ret = true; break;
              }
              dfs(j,v);
          }
        }
        processed[i] = 1;
        exit_time[i] = times;
        times = times+1;
        return ret;
    }
    
    
    int main()
    {
        int i,j,t,n1,n2;
        std::vector<int> v;
 
        v = {2,3,0,0,1};
        init(v.size());
        for (i = 0; i<v.size(); i++){
            for (j = 0; j < v.size(); j++){
               arr[i][j] = 0;
            }
        }
 
        for(i = 0; i<v.size(); i++){
          if (v[i] != 0){
            for (int j = i+1,t=0; t<v[i] ; j++){
                arr[i][j] = 1;
                t++;
            }
        }
    }
 
    bool rest = dfs(0,v);
    
    if (rest == 1)
        cout << "True";
    else
        cout<< "false"; 
    return 0;
}

///////////Solution with Vector/////////////
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
        bool ret = false;
        int count = 0;
     
        void init (int v){
            int i;
           // bipartite = true;
            for (i=0 ; i<v ; i++){
                processed[i] = discovered[i] = 0;
                parent[i] = -1;
            }
        }
     
        bool dfs (int i,vector<int> n[],int size)
        {
            discovered[i] = 1;
            times = times+1;
            entry_time[i] = times;
            
            //cout << i << endl;
     
            for (int j = 0 ; j < size; j++){
                for (int k = 0; k<n[i].size(); k++){
                  if (n[i][k] == j && discovered[j] == 0){
                      parent[j] = i;
                      if(n[i][k] == (size - 1))
                      { 
                        ret = true;
                        break;
                      }
                      if (ret != true)
                        dfs(n[i][k],n,size);
                      else
                        break;
              }
              }
            }
            processed[i] = 1;
            exit_time[i] = times;
            times = times+1;
            return ret;
        }
     
     
        int main()
        {
            int i,j,t,n1,n2;
            std::vector<int> v;
        
            v = {2,2,0,0,1};
            n1 = v.size();
            init(n1);
            
            std::vector<int> n[n1];    
     
            for(i = 0; i<n1; i++){
              if (v[i] != 0 && i != n1 -1){
                for (int j = i+1,t=0; t<v[i] ; j++){
                    n[i].push_back(j);
                    t++;
                }
                }
            }
        
        for (i =0; i < v.size(); i++){
            for(int j=0 ; j < n[i].size(); j++){
                cout << n[i][j] << " ";
            }
            cout << endl;
        }
        bool r = dfs(0,n,n1);
            
        if(r == 1) cout << "True" << endl; else cout << "False" << endl;
     
        return 0;
    }
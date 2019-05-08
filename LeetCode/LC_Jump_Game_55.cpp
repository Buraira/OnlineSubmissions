class Solution {
public:
    #define MAXV 1000
    
    vector<int> processed[MAXV,0];
    vector<int> discovered[MAXV+1,0];
    vector<int> parent[MAXV+1,-1];
    //vector<int> arr[MAXV+1][MAXV+1] ;
    int times=0;
    vector<int> entry_time[MAXV+1,0];
    vector<int> exit_time[MAXV+1,0];
    bool ret = false;
        void init (int v){
            int i;
           // bipartite = true;
            for (i=0 ; i<v ; i++){
                processed[i] = discovered[i] = [0];
                parent[i] = [-1;
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
    
    bool canJump(vector<int>& nums) {
            int i,j,t,n1,n2;
            std::vector<int> v;
        
            v = nums;
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
        bool ret = dfs(0,n,n1);
    
    return ret;
} 
};
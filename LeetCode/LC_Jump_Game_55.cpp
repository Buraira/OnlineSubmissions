class Solution {
public:
    #define MAXV 1000
    
    int processed[MAXV+1];
    int discovered[MAXV+1];
    int parent[MAXV+1];
    int arr[MAXV+1][MAXV+1] ;
    int times=0;
    int entry_time[MAXV+1];
    int exit_time[MAXV+1];
    bool ret = false;
    
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
                ret = true;
                break;
              }
              dfs(j,v);
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
        //v = {2,3,0,0,1};
        
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
 
    bool ret = dfs(0,v);
    
    return ret;
} 
};

void trimLeftTrailingSpaces(string &input) {
    input.erase(input.begin(), find_if(input.begin(), input.end(), [](int ch) {
        return !isspace(ch);
    }));
}

void trimRightTrailingSpaces(string &input) {
    input.erase(find_if(input.rbegin(), input.rend(), [](int ch) {
        return !isspace(ch);
    }).base(), input.end());
}

vector<int> stringToIntegerVector(string input) {
    vector<int> output;
    trimLeftTrailingSpaces(input);
    trimRightTrailingSpaces(input);
    input = input.substr(1, input.length() - 2);
    stringstream ss;
    ss.str(input);
    string item;
    char delim = ',';
    while (getline(ss, item, delim)) {
        output.push_back(stoi(item));
    }
    return output;
}

string boolToString(bool input) {
    return input ? "True" : "False";
}

int main() {
    string line;
    while (getline(cin, line)) {
        vector<int> nums = stringToIntegerVector(line);
        
        bool ret = Solution().canJump(nums);

        string out = boolToString(ret);
        cout << out << endl;
    }
    return 0;
}
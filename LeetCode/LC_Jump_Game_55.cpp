class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        bool ret = true;
        int i,j,c,l;
        c=0;
        l = nums.size();
        for (i = 0; i<l; i++){
            if (nums[i] == 0 && i != l-1)
            {
                for (j = i+1; j<l ; j++){
                    if (nums[j] != 0)
                    {
                        ret = false;
                        c++;
                    }
                }
            }
            else if ( i == l-1 && nums[i] == 0)
                ret = true;
            else
                continue;
        }
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
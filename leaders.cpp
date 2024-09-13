#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution{
    public:
    vector<int> leaders(vector<int> &v){
        vector<int> ans;
        
        for(int i = v.size()-2; i>=0 ; i--){
            v[i] = max(v[i] , v[i+1]);
        }
        ans.push_back(v[0]);
        for (int i = 1; i < v.size(); i++)
        {
            if (v[i]!=v[i-1])
            {
                /* code */
                ans.push_back(v[i]);
            }
            
        }
        
        return ans;

    }
};

int main() {
    vector<int> v = {1,2,3,4,5};
    Solution s;
    v = s.leaders(v);
    cout<<"leaders : ";
    for (auto &i : v)
    {
        cout<<i<<" ";
    }
    
    return 0;
}
#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(auto &i : strs){
            string str = i;
            sort(str.begin(),str.end());
            mp[str].push_back(i);
        }
        vector<vector<string>> ans;
        for(auto &i : mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};

int main() {
    vector<string> v ={"eat","tea","tan","ate","nat","bat"};
    Solution s;
    auto ans = s.groupAnagrams(v);
    for (auto &i : ans)
    {
        for (auto &j : i)
        {
            cout<<j<<" ";
        }cout<<endl;
    }
    
    return 0;
}
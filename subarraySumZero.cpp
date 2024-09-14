#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    vector<pair<int, int>> subarraySumZero(vector<int> &arr)
    {
        unordered_map<int, vector<int>> mp;
        vector<pair<int, int>> ans;
        int pref = 0;
        mp[0].push_back(-1);
        for (int i = 0; i < arr.size(); i++)
        {
            pref+=arr[i];
            if(mp.find(pref)!=mp.end()){
                for(auto &idx:mp[pref]){
                    ans.push_back({idx+1 , i});
                }
            }
            mp[pref].push_back(i);
        }
        return ans;
    }
};

int main()
{

    Solution s;
    vector<int> arr = {-3, 1, 2, -3, 4, 0};
    auto a = s.subarraySumZero(arr);

    for (auto &i : a)
    {
        cout<< i.first << " "<<i.second<<endl;
        
    }
    

    return 0;
}

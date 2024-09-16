#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> lh(n,0) , rh(n,0);
        lh[0] = height[0];
        rh[n-1] = height[n-1];
        for (int i = 1 ,  j = n-2; i < n && j>=0; i++ , j--)
        {
            lh[i] = max(lh[i-1],height[i]);
            rh[j] = max(rh[j+1],height[j]);
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans+= min(rh[i],lh[i]) - height[i];
        }
        
        return ans;

    }
};


int main() {

    Solution s;
    vector<int> v = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};

    cout<<"max water traped : "<<s.trap(v);
    
    return 0;
}
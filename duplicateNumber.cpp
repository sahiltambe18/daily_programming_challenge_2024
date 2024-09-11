#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int xorr = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int idx = abs(nums[i])-1;
            if (nums[idx]<0)
            {
                return idx+1;
            }
            nums[idx] = -nums[idx];
        }
        return -1;
    }
};

int main() {
    Solution s;
    vector<int> v = {1,2,3,4,5,5};
    cout<< s.findDuplicate(v);
    
    return 0;
}

/*
100

*/
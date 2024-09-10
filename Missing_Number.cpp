#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums ) {
        int sum = 0;
        for(auto &i : nums){
            sum+=i;
        }
        int n = nums.size() + 1;
        int tot = (n*(n+1))/2;
        return tot - sum;
    }
};

int main() {
    vector<int> v = {4,2,3,5};
    Solution s;
    cout<< s.missingNumber(v);
    return 0;
}
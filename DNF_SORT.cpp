#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void dnfSort(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size()-1;
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};


int main() {
    Solution s;
    vector<int> v = {0,2,1,2,2,2,1,1,0,0,1,2};
    s.dnfSort(v);
    for (auto i : v)
    {
        cout<<i<<" ";
    }
    

    return 0;
}
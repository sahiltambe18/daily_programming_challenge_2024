#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if(n==0) return 0;
        unordered_map<char,int> mp;
        int l = 0,ans =0 ;
        for(int i = 0 ; i < n ; i++){
            mp[s[i]]++;
            if(mp[s[i]]>1){
                while(mp[s[i]]>1){
                    mp[s[l]]--;
                    l++;
                }
            }
            if(ans<i-l+1){
                ans = i-l+1;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    string str= "abcabcbb";
    cout<<s.lengthOfLongestSubstring(str);
    return 0;
}
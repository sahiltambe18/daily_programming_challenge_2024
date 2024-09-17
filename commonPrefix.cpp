#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // string ans= "";
        sort(strs.begin(),strs.end());
        string f = strs[0];
        string l = strs[strs.size()-1];
        int len = f.length()>l.length() ? l.length() : f.length();
        for(int i = 0 ; i < len ; i++){
            if(f[i]!=l[i]) return f.substr(0,i);
        }
        return f.substr(0,len);
    }
};

int main() {

    Solution s;
    vector<string> v = {"flower","flow","flight"};

    cout<< s.longestCommonPrefix(v);

    return 0;
}
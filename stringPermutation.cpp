#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

class Solution
{
    unordered_set<string> st;
    void bt(string s , string tmp){
        if(tmp.length()==s.length()) st.insert(tmp);

        for(int i = 0 ; i < s.length() ; i++){
            if(s[i]=='-') continue;
            char c = s[i] ;
            s[i] = '-';
            bt(s,tmp + c);
            s[i] = c;
        }
    }
	public:
		vector<string>find_permutation(string S)
		{
            vector<string> v;
            bt(S , "" );
            for(auto &i : st){
                v.push_back(i);
            }
            return v;
		    
		}
};

int main() {

    string str = "abc";
    Solution s;

    auto st = s.find_permutation(str);

    for (auto &i : st)
    {
        cout<<i<<" ";
    }
    

    return 0;
}
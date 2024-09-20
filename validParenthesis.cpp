#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto i : s){
            if(i=='(' || i=='[' || i=='{'){
                st.push(i);
            }else{
                if(st.empty()){
                    return false;
                }
                if(i==')' && st.top()=='('){
                    st.pop();
                }else if(i==']' && st.top()=='['){
                    st.pop();
                }else if(i=='}' && st.top()=='{'){
                    st.pop();
                }else{
                    return false;
                }
            }
        }
        return st.empty();
    }
};

int main() {

    string str = "({)})";
    Solution s;
    cout<< s.isValid(str);
    
    return 0;
}
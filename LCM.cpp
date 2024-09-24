#include<iostream>
using namespace std;

class Solution{
    int gcd(int a , int b){
        if(b==0) return a;
        return gcd(b,a%b);
    }
    public:
    int lcm(int a , int b){
        return (a/gcd(a,b))*b;
    }
};

int main() {
    Solution s;
    int a ,b;
    cin>>a>>b;
    cout<< s.lcm(a,b);
        return 0;
}
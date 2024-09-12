#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &arr1, int m, vector<int> &arr2, int n)
    {
        int i = 0;
        int j = 0;

        while (i < m)
        {
            if (arr1[i] > arr2[0])
            {

                swap(arr1[i], arr2[0]);

                sort(arr2.begin(), arr2.end());
            }
            i++;
        }
    }
};

int main()
{
    vector<int> a = {1, 3, 5, 7};
    vector<int> b = {2, 4, 6, 8};

    Solution s;
    s.merge(a, 4, b, 4);
    for (auto &i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    for (auto &i : b)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

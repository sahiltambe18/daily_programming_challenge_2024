#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:

    int countkDist(string str, int k)
    {
        int n = str.length();
        int res = 0;

        for (int i = 0; i < n; i++)
        {
            int dist_count = 0;
            vector<int> cnt(26,0);

            for (int j = i; j < n; j++)
            {
                if (cnt[str[j] - 'a'] == 0) dist_count++;
                cnt[str[j] - 'a']++;

                if (dist_count == k) res++;
                if (dist_count > k) break;
            }
        }

        return res;
    }
};

int main()
{
    Solution s;
    cout<<s.countkDist("pqpqs", 2);

    return 0;
}
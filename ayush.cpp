#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minSwapsCouples(vector<int> &row)
    {
        int n = row.size();
        int ans = 0;
        for (int i = 0; i < n; i += 2)
        {
            int x = row[i];
            int y = row[i + 1];
            if (x % 2 == 0)
            {
                if (y == x + 1)
                {
                    continue;
                }
                else
                {
                    for (int j = i + 2; j < n; j++)
                    {
                        if (row[j] == x + 1)
                        {
                            swap(row[j], row[i + 1]);
                            ans++;
                            break;
                        }
                    }
                }
            }
            else
            {
                if (y == x - 1)
                {
                    continue;
                }
                else
                {
                    for (int j = i + 2; j < n; j++)
                    {
                        if (row[j] == x - 1)
                        {
                            swap(row[j], row[i + 1]);
                            ans++;
                            break;
                        }
                    }
                }
            }
        }
        return ans;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> row = {0, 2, 1, 3};

    Solution obj1;

    int ans = obj1.minSwapsCouples(row);

    cout << ans;

    return 0;
}
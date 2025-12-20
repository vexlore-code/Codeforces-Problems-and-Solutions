#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int m;
        cin >> m;
        vector<int> arr(m);
        for (int i = 0; i < m; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        bool found = false;
        do
        {
            int sum = arr[0] + arr[1];
            bool ok = true;
            for (int i = 1; i < m - 1; i++)
            {
                if (arr[i] + arr[i + 1] != sum)
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
            {
                found = true;
                break;
            }
        } while (next_permutation(arr.begin(), arr.end()));
        if (found)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
}
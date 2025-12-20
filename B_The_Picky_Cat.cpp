#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count;
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        int a;
        cin >> a;
        vector<int> arr(a);
        for (int j = 0; j < a; j++)
        {
            cin >> arr[j];
        }
        if (arr[0] < 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
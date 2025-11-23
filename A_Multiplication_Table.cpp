#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int limit = minimum(a, b);
    int count = 0;

    if(a % b != 0 || b % a != 0)
    {
        cout << 0 << endl;
        return 0;
    }
    else
    {
        for(int i = 1; i <= limit; i++)
        {
            if(a % i == 0 && b % i == 0)
            {
                count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}

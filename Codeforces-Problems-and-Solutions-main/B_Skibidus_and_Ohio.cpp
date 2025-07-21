#include <iostream>
using namespace std;
#define int long long
signed main() 
{
    int test;
    string s;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
      cin >> s;
      int f = 0;
      for (int j = 0; j < s.length(); j++)
      {
        if (s[j] == s[j + 1])
        {
          f = 1;       
          break;
        }
      }
      if (f == 1)
      {
        cout << "1" << endl;
      }
      else
      {
        cout << s.size() << endl;
      }
    }
    return 0;
}
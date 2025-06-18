#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    int maxIndex = 0;
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > arr[maxIndex]) 
        {
            maxIndex = i;
        }
    }

    for (int i = maxIndex; i < n - 1; i++) 
    {
        arr[i] = arr[i + 1];
    }
    n--;

    reverse(arr, arr + n);

    int minIndex = 0;
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] < arr[minIndex]) 
        {
            minIndex = i;
        }
    }

    cout << maxIndex + minIndex << endl;

    return 0;
}
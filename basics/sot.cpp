#include <bits/stdc++.h>
using namespace std;

int main()
{
    array<int, 5> arr = {11, 8, 4, 19, 23};
    vector<int> v;
    v.push_back(12);
    v.push_back(9);
    v.push_back(6);
    v.push_back(11);
    v.push_back(13);

    sort(arr.begin(), arr.end(), greater<>());
    sort(v.begin(), v.end(), greater<>());
    cout << "Array Element : ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl
         << "Vector Element : ";
    for (auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int n, temp, preSum, preFixSum;
vector<int> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++)
    {
        preSum = preSum + v[i];
        preFixSum = preFixSum + preSum;
    }

    cout << preFixSum;
    
    return 0;
}
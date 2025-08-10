#include <bits/stdc++.h>
using namespace std;

int n, m, temp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    vector<int> v1(n);
    for(int i = 0; i < n; i++) cin >> v1[i];

    sort(v1.begin(), v1.end());

    cin >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> temp;
        if(binary_search(v1.begin(), v1.end(), temp)) cout << 1 << '\n';
        else cout << 0 << '\n';
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    vector<pair<int, string>> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    stable_sort(v.begin(), v.end(), [](const auto& a, const auto& b)
    {
        return a.first < b.first;
    });

    for(const auto& a : v)
    {
        cout << a.first << " " << a.second << '\n';
    }

    return 0;
}
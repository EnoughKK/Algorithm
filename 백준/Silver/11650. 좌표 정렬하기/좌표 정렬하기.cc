#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), [](const auto& a, const auto& b)
    {
        if(a.first == b.first)
        {
            return a.second < b.second;
        }

        return a.first < b.first;
    }); 

    for(const auto& ret : v)
    {
        cout << ret.first << " " << ret.second << '\n';
    }

    return 0;
}
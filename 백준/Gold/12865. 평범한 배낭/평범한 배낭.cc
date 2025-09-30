#include <bits/stdc++.h>

using namespace std;

int n, k, w, v, dp[100004];
vector<pair<int, int>> vec;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> k;

    for(int i = 0; i < n; i++)
    {
        cin >> w >> v;
        vec.push_back(make_pair(w, v));
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = k; j >= vec[i].first; j--)
        {
            dp[j] = max(dp[j], dp[j - vec[i].first] + vec[i].second);
        }
    }

    cout << dp[k];

    return 0;
}
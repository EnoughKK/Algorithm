#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n, scores[301], dp[304];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }

    dp[0] = scores[0];
    dp[1] = scores[0] + scores[1];
    dp[2] = max(scores[0] + scores[2], scores[1] + scores[2] );

    for(int i = 3; i < n; i++)
    {
        dp[i] = max(dp[i - 3] + scores[i - 1] + scores[i], dp[i - 2] + scores[i]);
    }

    cout << dp[n - 1];

    return 0;
}
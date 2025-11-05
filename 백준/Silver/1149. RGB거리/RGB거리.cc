#include <bits/stdc++.h>

using namespace std;

int n, dp[3][1004], r[1004], g[1004], b[1004];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> r[i] >> g[i] >> b[i];
    }

    dp[0][0] = r[0];
    dp[1][0] = g[0];
    dp[2][0] = b[0];

    for(int i = 1; i < n; i++)
    {
        dp[0][i] = r[i] + min(dp[1][i-1], dp[2][i-1]);
        dp[1][i] = g[i] + min(dp[0][i-1], dp[2][i-1]);
        dp[2][i] = b[i] + min(dp[0][i-1], dp[1][i-1]);
    }

    cout << min(dp[0][n-1], min(dp[1][n-1], dp[2][n-1]));

    return 0;
}
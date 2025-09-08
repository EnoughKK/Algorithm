#include <bits/stdc++.h>

using namespace std;

int t, n, dp[12];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> t;

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for(int i = 1; i <= 3; ++i)
    {
        for(int j = 4; j <= 11; j++)
        {
            dp[j] = dp[j - 1] + dp[j - 2] + dp[j -3];
        }
    }

    for(int i = 0; i < t; ++i)
    {
        cin >> n;
        cout << dp[n] << '\n';
    }

    return 0;
}
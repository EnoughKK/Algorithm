#include <bits/stdc++.h>

using namespace std;

int n, t, ret, a[250004], dp[250004], idx = 3;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    if(n % 2 == 0)
    {
        t = (n+1) * n / 2;
    }
    else
    {
        t = n + (n * (n-1)/2);
    }

    for(int i = 0; i < t; i++)
    {
        cin >> a[i];
    }

    dp[0] = a[0];
    dp[1] = a[0] + a[1];
    dp[2] = a[0] + a[2];

    ret = max(dp[1], dp[2]);
    
    for(int i = 2; i < n; i++)
    {
        for(int j = 0; j < i + 1; j++)
        {
            
            if(j == 0)
            {
                dp[idx] = dp[idx-i] + a[idx];
            }
            else if(j == i)
            {
                dp[idx] = dp[idx - i - 1] + a[idx];
            }
            else
            {
                dp[idx] = max(dp[idx - i - 1] + a[idx], dp[idx - i] + a[idx]);
            }
            
            ret = max(ret, dp[idx]);
            idx++;
        }
    }

    cout << ret;

    return 0;
}
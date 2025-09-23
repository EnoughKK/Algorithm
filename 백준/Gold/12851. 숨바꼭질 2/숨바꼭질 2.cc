#include <bits/stdc++.h>

using namespace std;

const int INF = 987654321;
int n, k, dp[100004], cnt[100004];
queue<int> q;

void bfs(int n)
{
    dp[n] = 0;
    cnt[n] = 1;
    q.push(n);

    while(!q.empty())
    {
        int rec = q.front();
        q.pop();

        for(auto next : {rec - 1, rec + 1, rec * 2})
        {
            if(next >= 0 && next <= 100000)
            {
                if(dp[next] > dp[rec] + 1)
                {
                    cnt[next] = cnt[rec];
                    dp[next] = dp[rec] + 1;
                    q.push(next);
                }
                else if(dp[next] == dp[rec] + 1)
                {
                    cnt[next] += cnt[rec];
                }  
            }
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> k;

    if(n == k)
    {
        cout << 0 << '\n' << 1;
        return 0;
    }

    fill(dp, dp + 100004 ,INF);

    bfs(n);

    cout << dp[k] << '\n' << cnt[k];

    return 0;
}
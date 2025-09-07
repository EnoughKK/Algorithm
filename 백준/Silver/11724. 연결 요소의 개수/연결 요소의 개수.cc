#include <bits/stdc++.h>

using namespace std;

int n, m, cnt, visited[1004];
vector<vector<int>> adj;

void dfs(int rec)
{
    visited[rec] = 1;
    for(int i = 0; i < adj[rec].size(); ++i)
    {
        if(visited[adj[rec][i]]) continue;
        dfs(adj[rec][i]);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;
    adj.resize(n + 1);

    for(int i = 0; i < m; ++i)
    {
        int temp1(0), temp2(0);
        cin >> temp1 >> temp2;
        adj[temp1].push_back(temp2);
        adj[temp2].push_back(temp1);
    }

    for(int i = 1; i <= n; ++i)
    {
        if(visited[i]) continue;
        cnt++;
        dfs(i);
    }

    cout << cnt;

    return 0;
}
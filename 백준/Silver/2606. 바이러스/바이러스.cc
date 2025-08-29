#include <bits/stdc++.h>

using namespace std;

int n, link, cnt;
vector<vector<int>> adj;
bool visited[104];

void BFS(int st)
{
    queue<int> q;
    q.push(st);
    visited[st] = 1;
    while(!q.empty())
    {
        int cur = q.front();
        q.pop();

        for(auto next : adj[cur])
        {
            if(visited[next]) continue;
            visited[next] = 1;
            q.push(next);
            cnt++;
        }
    }

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> link;

    adj.assign(n + 1, {});

    for(int i = 0; i < link; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    BFS(1);
    cout << cnt;

    return 0;
}
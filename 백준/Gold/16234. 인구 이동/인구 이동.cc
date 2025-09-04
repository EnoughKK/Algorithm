#include <bits/stdc++.h>

using namespace std;

bool flag;
int n, l, r, avg, ret, a[51][51], visited[51][51];
int dy[] = {0, -1, 0, 1};
int dx[] = {1, 0, -1, 0};
vector<pair<int , int>> vAdj;

void dfs(int y, int x)
{
    visited[y][x] = 1;
    vAdj.push_back({y, x});
    avg += a[y][x];
    for(int i = 0; i < 4; ++i)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if(ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
        if(visited[ny][nx]) continue;

        if(abs(a[ny][nx] - a[y][x]) >= l && abs(a[ny][nx] - a[y][x]) <= r)
        {
            dfs(ny, nx);
            flag = true;
        }
    }

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> l >> r;

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            cin >> a[i][j];
        }
    }

    while(1)
    {
        flag = false;
        memset(visited, 0, sizeof(visited));
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < n; ++j)
            {
                if(visited[i][j]) continue;
                avg = 0;
                vAdj.clear();
                dfs(i, j);
                for(auto c : vAdj)
                {
                    a[c.first][c.second] = (avg / vAdj.size());
                }
            }
        }
        if(!flag) break;
        ret++;
    }
    cout << ret;

    return 0;
}
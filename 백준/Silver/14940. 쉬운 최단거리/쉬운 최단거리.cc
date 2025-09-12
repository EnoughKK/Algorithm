#include <bits/stdc++.h>

using namespace std;

int n, m, y, x, a[1004][1004];
int visited[1004][1004];

int dy[] = {0, -1, 0, 1};
int dx[] = {1, 0, -1, 0};
queue<pair<int, int>> q;

void bfs(int y, int x)
{
    int cnt = 0;
    visited[y][x] = 0;
    q.push({y, x});
    while(!q.empty())
    {
        tie(y, x) = q.front();
        q.pop();
        
        for(int i = 0; i < 4; ++i)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
            if(visited[ny][nx] != -1 || visited[ny][nx] == 0) continue;
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;

    memset(visited, -1, sizeof(visited));

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            cin >> a[i][j];
            if(a[i][j] == 2)
            {
                y = i;
                x = j;
            }
            else if(a[i][j] == 0) visited[i][j] = 0;
        }
    }

    
    bfs(y, x);

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            if( visited[i][j] == 0) cout << 0 << " ";
            else cout << visited[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
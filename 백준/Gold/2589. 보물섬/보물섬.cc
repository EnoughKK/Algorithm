#include <bits/stdc++.h>

using namespace std;

int h, w, ret = -1;
int a[51][51], visited[51][51];
int dy[] = {1, 0, -1, 0};
int dx[] = {0, 1, 0, -1};

int BFS(int y, int x)
{
    queue<pair<int, int>> q;
    visited[y][x] = 1;
    q.push({y, x});
    int maxDist = -1;
    while(q.size())
    {
        tie(y, x) = q.front();
        q.pop();

        for(int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            
            if (ny < 0 || ny >= h || nx < 0 || nx >= w) continue;
            if (a[ny][nx] == 0) continue;
            if (visited[ny][nx] != 0) continue;
            visited[ny][nx] = visited[y][x] + 1;
            maxDist = max(maxDist, visited[ny][nx]);
            q.push({ny, nx});
        }
    }

    return maxDist;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    cin >> h >> w;
    
    for(int i = 0; i < h; i++)
    {
        string row;
        cin >> row;
        for(int j = 0; j < w; j++)
        {
            if(row[j] == 'W') a[i][j] = 0;
            else a[i][j] = 1;
        }
    }

    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++)
        {        
            if(a[i][j] == 1)
            {
                memset(visited, 0, sizeof(visited));
                ret = max(ret, BFS(i,j));
            }
        }
    }

    cout << ret -1 << '\n';

    return 0;
}
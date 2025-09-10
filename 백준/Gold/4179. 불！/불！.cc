#include <bits/stdc++.h>

using namespace std;

char board[1004][1004];
int fTime[1004][1004], jTime[1004][1004], r, c, jy, jx, ret, y, x, INF = 2000;
int dy[] = {0, -1, 0, 1};
int dx[] = {1, 0, -1, 0};
queue<pair<int, int>> q;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> r >> c;

    for(int i = 0; i < r; ++i)
    {
        for(int j = 0; j < c; ++j)
        {
            cin >> board[i][j];
            fTime[i][j] = INF;
            jTime[i][j] = -1;
            if(board[i][j] == 'F')
            {
                fTime[i][j] = 1;
                q.push({i, j});
            }
            else if (board[i][j] == 'J')
            {
                if(i == 0 || j == 0 || i == (r - 1) || j == (c - 1))
                {
                    cout << 1;
                    return 0;
                }
                jTime[i][j] = 1;
                jy = i;
                jx = j;
            } 
        }
    }

    while(!q.empty())
    {
        tie(y, x) = q.front();
        q.pop();
        for(int i = 0; i < 4; ++i)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(ny < 0 || nx < 0 || ny >= r || nx >= c) continue;
            if(board[ny][nx] == '#' || fTime[ny][nx] != INF) continue;
            fTime[ny][nx] = fTime[y][x] + 1;
            q.push({ny, nx});
        }
    }

    q.push({jy, jx});
    while(!q.empty())
    {
        tie(y, x) = q.front();
        q.pop();
        for(int i = 0; i < 4; ++i)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            
            if(board[ny][nx] == '#' || jTime[ny][nx] != -1 || (jTime[y][x] + 1) >= fTime[ny][nx]) continue;
            if(ny == 0 || nx == 0 || ny == (r - 1) || nx == (c - 1))
            {
                cout << jTime[y][x] + 1;
                return 0;
            }
            
            jTime[ny][nx] = jTime[y][x] + 1;
            q.push({ny, nx});
        }
    }
    cout << "IMPOSSIBLE";

    return 0;
}
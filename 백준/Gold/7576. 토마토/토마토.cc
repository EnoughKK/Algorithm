#include <bits/stdc++.h>

using namespace std;

int n, m, ret, cnt, a[1004][1004], visited[1004][1004];
queue<pair<int , int>> q;
vector<pair<int ,int>> v;

int dy[] = {0, -1, 0, 1};
int dx[] = {1, 0, -1, 0};

void Bfs()
{
    while(!q.empty())
    {
        int y(0), x(0);
        tie(y, x) = q.front();
        q.pop();

        for(int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(ny < 0 || nx < 0 || ny >= n || nx >= m || visited[ny][nx] != 0) continue;
            if(a[ny][nx] == -1) continue;
            q.push(make_pair(ny, nx));
            visited[ny][nx] = visited[y][x] + 1;
            ret = max(ret, visited[ny][nx]);
        }

    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> m >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if(a[i][j] == 1)
            {
                v.push_back(make_pair(i, j));
            }
            if(a[i][j] != 0) cnt++;
        }
    }

    for(auto st : v)
    {
        q.push(st);
        visited[st.first][st.second] = 1;
    }
        

    Bfs();

    if(cnt == n * m)
    {
        cout << 0;
        return 0;
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(a[i][j] == -1) continue;

            if(visited[i][j] == 0)
            {
                cout << -1;
                return 0;
            }
        }
    }

    cout << ret - 1;

    return 0;
}
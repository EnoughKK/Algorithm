#include <bits/stdc++.h>

using namespace std;

int n, visited[64][64][64], hp[3];
int arr[6][3] =
{
    {9, 3, 1},
    {9, 1, 3},
    {3, 9, 1},
    {3, 1, 9},
    {1, 9, 3},
    {1, 3, 9}
};
struct A 
{
    int a, b, c;
};
queue<A> q;

int bfs(int a, int b, int c)
{
    q.push({a, b, c});
    visited[a][b][c] = 1;
    while(!q.empty())
    {
        int a = q.front().a;
        int b = q.front().b;
        int c = q.front().c;
        q.pop();
        if(visited[0][0][0]) break;
        for(int i = 0; i < 6; ++i)
        {
            int na = max(0, a - arr[i][0]);
            int nb = max(0, b - arr[i][1]);
            int nc = max(0, c - arr[i][2]);
            if(visited[na][nb][nc]) continue;
            visited[na][nb][nc] = visited[a][b][c] + 1;
            q.push({na, nb, nc});
        }
    }

    return visited[0][0][0] - 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n;++i)
    {
        cin >> hp[i];
    }

    cout << bfs(hp[0], hp[1], hp[2]);

    return 0;
}
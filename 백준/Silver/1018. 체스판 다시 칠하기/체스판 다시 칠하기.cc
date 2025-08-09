#include <bits/stdc++.h>
using namespace std;

int n, m, ret = 10000000;
char a[51][51];

int Go(int y, int x)
{
    int cnt1 = 0;
    int cnt2 = 0;

    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            char ex1 = (((i + j) % 2 == 0) ? 'W' : 'B');
            char ex2 = (((i + j) % 2 == 0) ? 'B' : 'W');

            if(ex1 != a[y + i][x + j]) cnt1++;
            if(ex2 != a[y + i][x + j]) cnt2++;
        }
    }

    return min(cnt1, cnt2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n - 7; i++)
    {
        for(int j = 0; j < m - 7; j++)
        {
            ret = min(ret, Go(i, j));
        }
    }

    cout << ret << '\n';

    return 0;
}
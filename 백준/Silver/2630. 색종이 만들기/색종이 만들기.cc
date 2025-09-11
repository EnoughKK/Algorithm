#include <bits/stdc++.h>

using namespace std;

int n, wCnt, bCnt, a[128][128];
int dy[] = {0, -1, 0, 1};
int dx[] = {1, 0, -1, 0};

bool check(int y, int x, int size)
{
    for(int i = y; i < (y + size); ++i)
    {
        for(int j = x; j < (x + size); ++j)
        {
            if(a[y][x] != a[i][j])
            {
                return false;
            }
        }
    }

    return true;
}

void Go(int y, int x, int size)
{
    if(check(y, x, size))
    {
        if(a[y][x] == 0) ++wCnt;
        else ++bCnt;
        return;
    }
    
    Go(y, x, size / 2);
    Go(y, x + (size/2), size / 2);
    Go(y + (size / 2), x, size / 2);
    Go(y + (size / 2), x + (size / 2), size / 2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            cin >> a[i][j];
        }
    }

    Go(0, 0, n);

    cout << wCnt << endl;
    cout << bCnt << endl;

    return 0;
}
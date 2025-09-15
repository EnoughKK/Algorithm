#include <bits/stdc++.h>

using namespace std;

int n, r, c, ret = -1, MaxSize = 1;

void Go(int Size, int y, int x)
{
    if(r >= y + (Size / 2) && c >= x + (Size / 2))
    {
        ret += 3 * (Size / 2) * (Size / 2);
        if(Size <= 2)
        {
            ret++;
            return;
        } 
        else Go((Size / 2), y + (Size / 2), x + (Size / 2));
    }
    else if(r >= y + (Size / 2) && c < x + (Size / 2))
    {
        ret += 2 * (Size / 2) * (Size / 2);
        if(Size <= 2)
        {
            ret++;
            return;
        } 
        else Go((Size / 2), y + (Size / 2), x);
    }
    else if(r < y + (Size / 2) && c >= x + (Size / 2))
    {
        ret += 1 * (Size / 2) * (Size / 2);
        if(Size <= 2)
        {
            ret++;
            return;
        } 
        else Go((Size / 2), y, x + (Size / 2));
    }
    else if(r < y + (Size / 2) && c < x + (Size / 2))
    {
        if(Size <= 2)
        {
            ret++;
            return;
        } 
        else Go((Size / 2), y, x);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> r >> c;

    for(int i = 0; i < n; i++)
    {
        MaxSize *= 2;
    }

    Go(MaxSize, 0, 0);

    cout << ret;

    return 0;
}
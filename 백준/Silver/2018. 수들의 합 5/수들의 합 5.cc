#include <bits/stdc++.h>

using namespace std;

int n, l(0), r(1), sum(1), cnt(1);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    if(n == 1) cnt--;
    while(1)
    {
        if(l >= r) break;

        if(sum <= n)
        {
            if(sum == n) ++cnt; 
            ++r;
            sum += r;
        }
        else
        {
            sum -= l;
            ++l;
        }
    }

    cout << cnt;

    return 0;
}
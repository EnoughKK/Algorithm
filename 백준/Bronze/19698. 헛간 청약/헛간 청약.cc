#include <bits/stdc++.h>
using namespace std;

int n , w, h, l, ret;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> w >> h >> l;

    ret = (w / l) * (h / l);

    if(ret >= n) cout << n << '\n';
    else cout << ret << '\n';

    return 0;
}
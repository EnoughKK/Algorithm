#include <bits/stdc++.h>
using namespace std;

int l, a, b, c, d, math, korean, ret;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> l >> a >> b >> c >> d;

    if(a % c) math = (a / c) + 1;
    else math = (a / c);
    if(b % d) korean = (b / d) + 1;
    else korean = (b / d);

    ret = l - max(math, korean);

    cout << ret;

    return 0;
}
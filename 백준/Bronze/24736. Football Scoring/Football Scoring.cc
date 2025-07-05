#include <bits/stdc++.h>

using namespace std;

int t, f, s, p, c;

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    for(int i = 0; i < 2; i++)
    {
        int ret;
        cin >> t >> f >> s >> p >> c;

        ret = 6 * t + 3 * f + s * 2 + p * 1 + c * 2;
        cout << ret << " ";
    }  

    return 0;
}
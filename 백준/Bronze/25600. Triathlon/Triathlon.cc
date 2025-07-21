#include <bits/stdc++.h>
using namespace std;

int n, ret = -1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int a, d, g ,temp;

        cin >> a >> d >> g;

        temp = a * (d + g);
        if(a == (d + g)) temp *= 2;
        ret = max(ret, temp);
    }

    cout << ret;

    return 0;
}
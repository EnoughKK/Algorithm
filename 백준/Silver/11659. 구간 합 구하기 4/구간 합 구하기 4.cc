#include <bits/stdc++.h>

using namespace std;

int n, m, sum, temp, ret, a[100004];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        sum += temp;
        a[i] = sum;
    }

    for(int i = 0; i < m; i++)
    {
        int start, end = 0;
        cin >> start >> end;

        if(start == 1) ret = a[end - 1];
        else ret = (a[end - 1] - a[start - 2]);
        cout << ret << '\n';
    }

    return 0;
}
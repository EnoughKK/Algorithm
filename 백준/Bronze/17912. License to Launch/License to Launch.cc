#include <bits/stdc++.h>
using namespace std;

int n, ret, Min, a[100004];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> a[0];
    ret = 0;
    Min = a[0];
    for(int i = 1; i < n; i++)
    {
        cin >> a[i];
        int temp = Min;
        Min = min(a[i], Min);
        if(Min != temp) ret = i;
    }

    cout << ret << '\n';

    return 0;
}
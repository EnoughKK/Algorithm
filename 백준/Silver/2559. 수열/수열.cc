#include <bits/stdc++.h>

using namespace std;

int n, k, pre, a[100004], ret;

int main()

{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n >> k;

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < k; i++) ret += a[i];
    for(int i = 1; i <= n - k; i++)
    {
        int temp = 0;
        for(int j = i; j < i + k; j++) temp += a[j];
        ret = max(ret, temp);
    }

    cout << ret;

    return 0;
}
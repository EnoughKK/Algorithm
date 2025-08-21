#include <bits/stdc++.h>
using namespace std;

int n;
double a, ret;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a;

        ret = a / 6;

        cout << fixed << setprecision(10) << ret << '\n';
    }

    

    return 0;
}
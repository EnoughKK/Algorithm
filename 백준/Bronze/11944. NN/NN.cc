#include <bits/stdc++.h>
using namespace std;

int n, m, l;
string s;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;

    s = to_string(n);
    l = s.size();
    for(int i = 0; i < n * l; i++)
    {
        if(i >= m) break;
        cout << s[i % l];
    }

    return 0;
}
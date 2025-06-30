#include <bits/stdc++.h>

using namespace std;

int n, m, pos;
long long ret;
string a, b;

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        map<string, int> mp;
        ret = 1;
        cin >> m;
        for(int j = 0; j < m; j++)
        {
            cin >> a >> b;
            mp[b]++;
        }

        for(auto i : mp)
        {
            ret *= ((long long)i.second + 1);
        }
        ret--;
        cout << ret << "\n";
    }

    

    return 0;
}
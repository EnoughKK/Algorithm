#include <bits/stdc++.h>
using namespace std;

int n, m;
map<int, int> mp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if(mp.find(temp) == mp.end()) mp.insert({temp, 1});
        else mp[temp]++;
    }

    cin >> m;
    for(int i = 0; i < m; i++)
    {
        int key;
        cin >> key;
        if(mp.find(key) == mp.end()) cout << 0 << " ";
        else cout << mp[key] << " ";
    }

    return 0;
}
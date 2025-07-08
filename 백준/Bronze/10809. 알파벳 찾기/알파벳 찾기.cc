#include <bits/stdc++.h>
using namespace std;

string s;
vector<int> v(26, -1);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> s;

    for(int i = 0; i < 26; i++)
    {
        int ret = s.find('a' + i);
        if(ret != string::npos) v[i] = ret;
    }

    for(auto i : v)
    {
        cout << i << " ";
    }

    return 0;
}
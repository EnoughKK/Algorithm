#include <bits/stdc++.h>
using namespace std;

string s;

string Go(string s)
{
    while(s.size() > 1)
    {
        int ret = 0;
        for(int i = 0; i < s.size(); i++)
        {
            ret += s[i] - '0';
        }
        s = to_string(ret);
    }

    return s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    while(1)
    {
        cin >> s;
        if(s == "0") break;
        cout << Go(s) << '\n';
    }

    return 0;
}
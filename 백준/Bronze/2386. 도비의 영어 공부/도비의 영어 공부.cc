#include <bits/stdc++.h>

using namespace std;

char c;
string s;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    while(1)
    {
        int cnt = 0;
        cin >> c;
        if(c == '#')
        {
            break;
        }

        getline(cin, s);

        for(auto C : s)
        {
            if(C == c || C == (c - 32) ) ++cnt;
        }

        cout << c << " " << cnt << '\n';
    }

    return 0;
}
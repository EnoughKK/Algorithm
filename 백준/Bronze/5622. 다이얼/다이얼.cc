#include <bits/stdc++.h>
using namespace std;

string s;
int ret;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> s;

    for(int i = 0; i < s.size(); i++)
    {
        int next = ((s[i] - 'A') / 3) + 3;
        if(s[i] == 'S') next -= 1;
        if(s[i] == 'V') next -= 1;
        if(next > 10) next = 10;
        ret += next;
    }

    cout << ret;

    return 0;
}
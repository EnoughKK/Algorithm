#include <bits/stdc++.h>
using namespace std;

string s, ret;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> s;

    for(char c : s)
    {
        if(c == 'B') ret += 'v';
        else if(c == 'E') ret += "ye";
        else if(c == 'H') ret += 'n';
        else if(c == 'P') ret += 'r';
        else if(c == 'C') ret += 's';
        else if(c == 'Y') ret += 'u';
        else if(c == 'X') ret += 'h';
        else ret += c + 32;
    }

    cout << ret << '\n';

    return 0;
}
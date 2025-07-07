#include <bits/stdc++.h>
using namespace std;

string s;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> s;

    if(s[0] == 'E') cout << 'I';
    else cout << 'E';

    if(s[1] == 'S') cout << 'N';
    else cout << 'S';

    if(s[2] == 'T') cout << 'F';
    else cout << 'T';

    if(s[3] == 'J') cout << 'P';
    else cout << 'J';

    return 0;
}
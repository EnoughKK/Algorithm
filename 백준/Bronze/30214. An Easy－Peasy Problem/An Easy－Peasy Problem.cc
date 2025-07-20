#include <bits/stdc++.h>
using namespace std;

int s1, s2;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> s1 >> s2;

    if(s2 <= s1 * 2) cout << 'E';
    else cout << 'H';

    return 0;
}
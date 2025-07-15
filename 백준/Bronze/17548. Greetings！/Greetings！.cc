#include <bits/stdc++.h>
using namespace std;

string s;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> s;

    cout << 'h';

    int range = (s.size() - 2) * 2;
    for(int i = 0; i < range; i++)
    {
        cout << 'e';
    }
    cout << 'y';

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int a[3],b[3];
string s1[3], s2[3];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    for(int i = 0; i < 3; i++)
    {
        cin >> a[i] >> s1[i] >> s2[i];
        b[i] = a[i];
    }

    sort(s1, s1 + 3);
    for(int i = 0; i < 3; i++)
    {
        cout << s1[i][2] << s1[i][3];
    }
    cout << '\n';

    sort(b, b + 3);
    for(int i = 2; i >= 0; i--)
    {
        for(int j = 0; j < 3; j++)
        {
            if(a[j] == b[i]) 
            {
                cout << s2[j][0];
                break;
            }
        }
    }

    return 0;
}
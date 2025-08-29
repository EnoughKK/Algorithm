#include <bits/stdc++.h>

using namespace std;

int T, B;
string s;

char ToInt(int a[])
{
    int ret = 0;
    ret = (a[0] * 128) + (a[1] * 64) + (a[2] * 32) + (a[3] * 16) + (a[4] * 8) + (a[5] * 4) + (a[6] * 2) + (a[7] * 1);

    return (char)ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> T;
    for(int i = 0; i < T; i++)
    {
        cin >> B;
        cin >> s;
        vector<char> v;
        for(int j = 0; j < B; j++)
        {
            int a[8] = {0};
            for(int k = 0; k < 8; k++)
            {
                if(s[(j * 8) + k] == 'I') a[k] = 1;
                else a[k] = 0;
            }
            v.push_back(ToInt(a));
        }

        cout << "Case #" << i + 1 << ": ";
        for(auto c : v) cout << c;
        cout << '\n';
    }

    return 0;
}
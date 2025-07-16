#include <bits/stdc++.h>
using namespace std;

int n;
string s;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> s;

        int ret = 0;
        int flag = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'O') flag++;
            else flag = 0;
            ret += flag;
        }
        cout << ret << '\n';
    }

    return 0;
}
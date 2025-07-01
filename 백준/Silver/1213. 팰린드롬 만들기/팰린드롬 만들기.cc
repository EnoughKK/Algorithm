#include <bits/stdc++.h>

using namespace std;

string s, ret;
int flag, mid, cnt[200];

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(); cin.tie();

    cin >> s;
    for(char a : s) cnt[a]++;

    for(int i = 'Z'; i >= 'A'; i--)
    {
        if(cnt[i] & 1) {mid = i; flag++;}
        if(flag > 1) break;
        else
        {
            for(int j = 0; j < (cnt[i] / 2); j++)
            {
                ret = char(i) + ret;;
                ret += char(i);
            }
        }
    }
    if(mid) ret.insert(ret.begin() + ret.size() / 2, mid);
    if(flag > 1) cout << "I'm Sorry Hansoo";
    else cout << ret;

    return 0;
}
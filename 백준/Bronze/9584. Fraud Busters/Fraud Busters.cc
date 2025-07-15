#include <bits/stdc++.h>
using namespace std;

char c[9];
int n;
string s;
vector<int> v;
vector<string> ret;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> s >> n;
    for(int i = 0; i < 9; i++)
    {
        if(s[i] != '*') v.push_back(i);
    }
    
    for(int i = 0; i < n; i++)
    {
        bool flag = true;
        string temp;
        cin >> temp;

        for(int m : v)
        {
            if(temp[m] != s[m])
            {
                flag = false;
                break;
            } 
        }

        if(flag) ret.push_back(temp);
    }

    cout << ret.size() << '\n';

    if(!ret.empty())
    {
        for(string ans : ret) cout << ans << '\n';
    }

    return 0;
}
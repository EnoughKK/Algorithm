#include <bits/stdc++.h>

using namespace std;

int n, ret, Max, a[1004];
int flag;
vector<vector<int>> v;

void combi(int rec, int start, vector<int>& t)
{
    if(t.size() == 3)
    {
        ret = max(ret, ((t[0] + t[1] + t[2]) % 10));
        return;
    }
    for(int i = start + 1; i < 5; i++)
    {
        t.push_back(v[rec][i]);
        combi(rec, i, t);
        t.pop_back();
    }

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    v.resize(n);
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < 5; ++j)
        {
            int temp = 0;
            cin >> temp;
            v[i].push_back(temp);
        }
    }

    for(int i = 0; i < n; ++i)
    {
        ret = 0;
        vector<int> t;
        combi(i, -1, t);
        if(Max <= ret)
        {
            flag = i + 1;
            Max = ret;
        }
    }
    cout << flag;

    return 0;
}